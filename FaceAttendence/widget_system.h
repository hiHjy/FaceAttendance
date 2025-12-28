#ifndef WIDGET_SYSTEM_H
#define WIDGET_SYSTEM_H

#include <QWidget>

namespace Ui {
class Widget_System;
}

class Widget_System : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_System(QWidget *parent = nullptr);
    ~Widget_System();

private:
    Ui::Widget_System *ui;
};

#endif // WIDGET_SYSTEM_H
