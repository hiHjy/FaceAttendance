#ifndef TEST_H
#define TEST_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class test; }
QT_END_NAMESPACE

class test : public QWidget
{
    Q_OBJECT

public:
    test(QWidget *parent = nullptr);
    ~test();


private:
    Ui::test *ui;

};

#endif // TEST_H
