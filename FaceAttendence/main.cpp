#include "faceattendence.h"
#include "register.h"
#include <QApplication>
#include "form.h"
#include "QDebug"
#include <QFontDatabase>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug() << "main 函数执行";
    Form f;
    f.show();


    return a.exec();
}
