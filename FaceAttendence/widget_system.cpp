#include "widget_system.h"
#include "ui_widget_system.h"

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
