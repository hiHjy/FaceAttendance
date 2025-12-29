#include "widget_system.h"
#include "ui_widget_system.h"
#include <QProcess>
Widget_System::Widget_System(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget_System)
{
    ui->setupUi(this);
}

Widget_System::~Widget_System()
{
    delete ui;
}

void Widget_System::on_btn_poweroff_clicked()
{
    QProcess::startDetached("poweroff");
}

void Widget_System::on_btn_restart_clicked()
{
    QProcess::startDetached("reboot");
}
