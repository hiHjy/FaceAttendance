#ifndef DIALOG_ADMIN_H
#define DIALOG_ADMIN_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog_Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Admin(QWidget *parent = nullptr);
    ~Dialog_Admin();

private slots:
    void on_btn_exit_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_ADMIN_H
