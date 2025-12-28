#ifndef WIDGET_LOGIN_PAGE_H
#define WIDGET_LOGIN_PAGE_H

#include <QWidget>
class Dialog_Admin;
namespace Ui {
class Widget_Login_Page;
}

class Widget_Login_Page : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_Login_Page(QWidget *parent = nullptr);
    ~Widget_Login_Page();

private slots:

    void on_pushButton_clicked();

private:
    Ui::Widget_Login_Page *ui;
};

#endif // WIDGET_LOGIN_PAGE_H
