#include "powermanager.h"
#include <QDebug>
#include <QFile>
#include "faceattendence.h"
#define BALCKLIGHT_PATH "/sys/class/backlight/backlight/brightness"

PowerManager::PowerManager(QObject *parent) : QObject(parent)
{

    //notifier =
    inotifyFd = inotify_init1(IN_NONBLOCK); //监控用的文件描述符，非阻塞防止阻塞ui。
    if (inotifyFd < 0) {
        qDebug() << "inotify_init1 error";
        return;
    }

    if (inotify_add_watch(inotifyFd, BALCKLIGHT_PATH, IN_MODIFY) < 0) { //监控文件，当文件被修改时触发
        qDebug() << "inotify_add_watch error";
        return;
    }

    notifier = new QSocketNotifier(inotifyFd, QSocketNotifier::Read, this); //监控可读
    connect(notifier, &QSocketNotifier::activated, this, &PowerManager::backlightStatusChanged);
    // bool val = true;

    //backlightStatusChanged(val)

    int val;
    if (readBrightness(val)) {
        lastState = val;
        //emit
    }

}

void PowerManager::backlightStatusChanged()
{
    char buf[4096];
    while (true) {
        //读inotify用的fd， 只有读了才会清除QSocketNotifier::Read 的可读状态，如果不读，那么会一直触发这个可读信号
        int ret = read(inotifyFd, buf, 4096);
        if (ret <= 0) {
            //读失败时说明已经清除了，退出循环即可！
            break;
        }
    }

    int val;
    if (readBrightness(val)) {
        if (val != lastState) {
            lastState = val;
            emit powerStatusChange(lastState);
        }
    }

}

bool PowerManager::readBrightness(int &val)
{
    QByteArray data;
    QFile file(BALCKLIGHT_PATH);
    file.open(QIODevice::ReadOnly);
    if (!file.isOpen()) {
        qDebug() << "can not open file:" << BALCKLIGHT_PATH;
        return false;
    }

    val = file.readAll().trimmed().toUInt();


    qDebug()<< "背光文件变化当前值为:" << val;
    return true;
}

