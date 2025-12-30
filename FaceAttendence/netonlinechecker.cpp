#include "netonlinechecker.h"
#include <QSsl>
#include <QNetworkReply>
#define TIMER_INTERVAL 5000
#define TIMEOUT 3000


/*

    总结：
    流程：就是用定时器去周期性的去访问指定的URL，根据返回的状态码去判断网络是否真的可以上网。

    1，此模块代码的编写，对qt的信号和槽机制有了更深刻的理解，而且对定时器的使用又更加熟悉了。
    信号和槽的第三个参数表示该链接绑定的上下文，这个上下文可以控制这个连接的生命周期，
    另外学习了为避免在网络不好的情况下，在发送请求后避免重复发送请求的方法。

    2，再次接触网络访问管理器的使用，对网络访问管理器有了进一步的理解。




*/


#define URL "https://www.apple.com/library/test/success.html"
NetOnlineChecker::NetOnlineChecker(QObject *parent) : QObject(parent)
{
    manager = new QNetworkAccessManager(this);
    url = QUrl(URL);
    checkOnce(); //开局直接先检测一次网络
    timer = new QTimer(this);
    timer->setInterval(TIMER_INTERVAL); //TIMER_INTERVAL = 5000; 5s
    timer->start();
    connect(timer, &QTimer::timeout, this, &NetOnlineChecker::checkOnce); //5s检查一次
}


/* 用于立刻检测网络的状态 */

void NetOnlineChecker::checkOnce()
{


    QNetworkRequest request(url); //https请求

    /*这段代码是禁用 SSL 证书验证的配置，主要用于开发板或测试环境中绕过 HTTPS 的证书验证问题*/
        // 1. 获取默认的SSL配置
    QSslConfiguration config = QSslConfiguration::defaultConfiguration();

        // 2. 设置使用任何SSL协议版本（TLS 1.0/1.1/1.2/1.3等）
    config.setProtocol(QSsl::AnyProtocol);

        // 3. 禁用对端（服务器）证书验证 ⚠️重要
    config.setPeerVerifyMode(QSslSocket::VerifyNone);

        // 4. 将配置应用到请求
    request.setSslConfiguration(config);
    request.setHeader(QNetworkRequest::UserAgentHeader, "QtNetProbe/1.0");

    if (reply) return; //如果reply还没有被释放那么说明已经发送请求了，不过正在等待，此时不要发送新的请求了，防止重复发送请求
    reply = manager->head(request); //立即发送了 HTTP HEAD 请求

    QTimer *timeoutTimer = new QTimer(reply);//让这个定时器作为reply的子对象，当reply被析构时，定时器被自动删除，安全！
    timeoutTimer->setSingleShot(true); //这个定时器只被触发一次
    timeoutTimer->setInterval(TIMEOUT);
    timeoutTimer->start();

    /* 注意:connect 的第三个参数是上下文对象，当这个对象被删除后，这个信号和槽就失效了 */
    QNetworkReply *r = reply;
    connect(timeoutTimer, &QTimer::timeout, reply, [r](){
        if (r && r->isRunning()) //如果超时就干掉这个请求，
             r->abort();    //立即终止请求, 会触发它自己的errorOccurred和finished()信号，虽然finished但错误 ☺

    });


//    QTimer::singleShot(TIMEOUT, [reply]() {
//        if (reply && reply->isRunning()) //如果超时就干掉这个请求，
//             reply->abort();    //立即终止请求, 会触发它自己的errorOccurred和finished()信号，虽然finished但错误 ☺
//    });

    connect(reply, &QNetworkReply::finished, this, [this]() {
            bool ok = false;
            if (reply->error() == QNetworkReply::NoError) {
                int code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                ok = (code >= 200 && code < 300); //2xx /3xx/4xx 都算网络可达 /2xx 表示能上网。这里是这个类判断的最根本的地方，如果到时候有问题，可能是这里有问题

            }

            reply->deleteLater();
            reply = nullptr;
            if (ok != netStatus) {
                netStatus = ok;
                emit netStatusChanged(ok); //如果状态改变了通知ui更新状态
            }



    });





}
