#ifndef RECORD_H
#define RECORD_H

#include <QWidget>
#include <QSqlQueryModel>
namespace Ui {
class Record;
}

class Record : public QWidget
{
    Q_OBJECT

public:
    explicit Record(QWidget *parent = nullptr);
    ~Record();

private slots:
    void on_pushButton_2_clicked();
    bool getRecordByDate(const QDate &date, const QString &userId = QString());
    void on_pushButton_clicked();

private:
    Ui::Record *ui;
    QSqlQueryModel *model;
};

#endif // RECORD_H
