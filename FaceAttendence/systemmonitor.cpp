#include "systemmonitor.h"
#include <cmath>
#include <QFile>
#include <QDebug>
#define CPU_TEMP_FILE "/sys/devices/virtual/thermal/thermal_zone0/temp"
SystemMonitor::SystemMonitor(QObject *parent) : QObject(parent)
{
    timer = new QTimer(this);
    timer->start(1000);
    connect(timer, &QTimer::timeout, this, &SystemMonitor::updateSysStatus);

}

QString SystemMonitor::readCpuTemp()
{
    QByteArray out;
    if (!readFirstLine(CPU_TEMP_FILE, out)) {
        qDebug() << "read CPU temp error:readFirstLine";
        return QString();
    }
    bool ok = false;
    double tmp = out.toDouble(&ok) / 1000.0;
    if (!ok) {
        qDebug() << "read CPU temp error:toDouble";
        return QString();
    }
    QString temp  = QString::number(tmp , 'f', 1) + QString::fromUtf8("℃"); //保留一位小数

    return temp;

}

QString SystemMonitor::readDate()
{
    QString timeStr = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    return timeStr;
}

void SystemMonitor::updateSysStatus()
{
    QString temp = readCpuTemp();
    QString Date = readDate();

    emit updated(Date, temp);
}

bool SystemMonitor::readFirstLine(const QString path, QByteArray &out)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "can not open path " << path;
        return false;
    }
    out = file.readLine().trimmed();

    return !out.isEmpty();

}
