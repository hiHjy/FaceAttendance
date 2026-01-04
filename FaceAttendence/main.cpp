#include "faceattendence.h"
#include "register.h"
#include <QApplication>
#include "form.h"
#include "QDebug"
#include <QFontDatabase>
#include <QInputMethod>
#include <powermanager.h>
#include <QQuickWidget>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QApplication::setOverrideCursor(Qt::BlankCursor);

    qDebug() << "main 函数执行";
    Form f;


    f.show();


    return a.exec();
}
