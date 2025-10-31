#include "face_api.h"

QString client_id = "EuabRmosANnliPgnNxB32rDt";
QString client_secret = "8GGFznpVx7azYYSCFampuULKW3UxgLvp";

void getAccessToken(std::function<void(QString)> callback)
{
    QNetworkAccessManager* manager = new QNetworkAccessManager;

    QUrl url("https://aip.baidubce.com/oauth/2.0/token");
    QNetworkRequest request(url);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QUrlQuery params;
    params.addQueryItem("grant_type", "client_credentials");
    params.addQueryItem("client_id", client_id);
    params.addQueryItem("client_secret", client_secret);

    QObject::connect(manager, &QNetworkAccessManager::finished,
                     [callback](QNetworkReply* reply)
    {
        QByteArray response = reply->readAll();
        QJsonDocument doc = QJsonDocument::fromJson(response);
        QString token = doc["access_token"].toString();
        //token_global = token;
        callback(token);
        reply->deleteLater();
    });

    manager->post(request, params.toString(QUrl::FullyEncoded).toUtf8());
}

void faceSearch(QString base64Image, QString token)
{
    QNetworkAccessManager* manager = new QNetworkAccessManager;

    QString url = QString(
        "https://aip.baidubce.com/rest/2.0/face/v3/search?access_token=%1"
    ).arg(token);

    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["image"] = base64Image;
    json["image_type"] = "BASE64";
    json["group_id_list"] = "11";

    QJsonDocument doc(json);

    QObject::connect(manager, &QNetworkAccessManager::finished,
                     [](QNetworkReply* reply)
    {
        QString result = reply->readAll();
        qDebug() << "识别结果：" << result;
        reply->deleteLater();
    });

    manager->post(request, doc.toJson());
}
