/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <faceattendence.h>
#include <register.h>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QTabWidget *tabWidget;
    FaceAttendence *Face_Identifaction;
    Register *Face_Register;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(800, 480);
        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 800, 480));
        Face_Identifaction = new FaceAttendence();
        Face_Identifaction->setObjectName(QString::fromUtf8("Face_Identifaction"));
        tabWidget->addTab(Face_Identifaction, QString());
        Face_Register = new Register();
        Face_Register->setObjectName(QString::fromUtf8("Face_Register"));
        tabWidget->addTab(Face_Register, QString());

        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Face_Identifaction), QApplication::translate("Form", "\344\272\272\350\204\270\350\257\206\345\210\253", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Face_Register), QApplication::translate("Form", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
