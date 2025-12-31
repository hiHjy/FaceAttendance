#include "widget_system.h"
#include "ui_widget_system.h"
#include <QProcess>
#include "netonlinechecker.h"
#include <QDebug>
#include "systemmonitor.h"
Widget_System::Widget_System(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget_System)
{
    ui->setupUi(this);
    netChecker = new NetOnlineChecker(this);
    monitor = new SystemMonitor(this);
    connect(netChecker, &NetOnlineChecker::netStatusChanged, this, &Widget_System::netStatusUpdate);
    connect(monitor, &SystemMonitor::updated, this, &Widget_System::updateStatus);
}

Widget_System::~Widget_System()
{
    delete ui;
}

void Widget_System::updateStatus(QString Date, QString temp)
{
    ui->lb_cpu_tem->setText(temp);
    ui->lb_sys_date->setText(Date);
}

void Widget_System::on_btn_poweroff_clicked()
{
    QProcess::startDetached("poweroff");
}

void Widget_System::on_btn_restart_clicked()
{
    QProcess::startDetached("reboot");
}

void Widget_System::netStatusUpdate(bool ok)
{
     qDebug() << "net ok:" << ok;
     if (ok) {
         ui->lb_net_status->setStyleSheet("color:green;");
         ui->lb_net_status->setText("已连接");
     } else {
         ui->lb_net_status->setStyleSheet("color:red;");
         ui->lb_net_status->setText("异常,请联系管理员");
     }
}
