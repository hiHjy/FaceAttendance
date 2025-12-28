/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Lb_Name;
    QLineEdit *Le_Name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Lb_Identity;
    QLineEdit *Le_Identity;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Lb_WorkId;
    QLineEdit *Le_WorkID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Lb_Dept;
    QLineEdit *Le_Dept;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *Btn_Register;
    QPushButton *Btn_Clear;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *Lb_Img;
    QLineEdit *Le_Path;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *Btn_AddImg;
    QPushButton *Btn_Cap;
    QPushButton *Btn_Shot;
    QWidget *widget;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->setEnabled(true);
        Register->resize(800, 480);
        Register->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 811, 411));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 0, 5, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Lb_Name = new QLabel(layoutWidget);
        Lb_Name->setObjectName(QString::fromUtf8("Lb_Name"));
        QFont font;
        font.setPointSize(15);
        Lb_Name->setFont(font);

        horizontalLayout->addWidget(Lb_Name);

        Le_Name = new QLineEdit(layoutWidget);
        Le_Name->setObjectName(QString::fromUtf8("Le_Name"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Le_Name->sizePolicy().hasHeightForWidth());
        Le_Name->setSizePolicy(sizePolicy);
        Le_Name->setFont(font);

        horizontalLayout->addWidget(Le_Name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        Lb_Identity = new QLabel(layoutWidget);
        Lb_Identity->setObjectName(QString::fromUtf8("Lb_Identity"));
        Lb_Identity->setFont(font);

        horizontalLayout_5->addWidget(Lb_Identity);

        Le_Identity = new QLineEdit(layoutWidget);
        Le_Identity->setObjectName(QString::fromUtf8("Le_Identity"));
        sizePolicy.setHeightForWidth(Le_Identity->sizePolicy().hasHeightForWidth());
        Le_Identity->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(18);
        Le_Identity->setFont(font1);

        horizontalLayout_5->addWidget(Le_Identity);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        Lb_WorkId = new QLabel(layoutWidget);
        Lb_WorkId->setObjectName(QString::fromUtf8("Lb_WorkId"));
        Lb_WorkId->setFont(font);

        horizontalLayout_6->addWidget(Lb_WorkId);

        Le_WorkID = new QLineEdit(layoutWidget);
        Le_WorkID->setObjectName(QString::fromUtf8("Le_WorkID"));
        sizePolicy.setHeightForWidth(Le_WorkID->sizePolicy().hasHeightForWidth());
        Le_WorkID->setSizePolicy(sizePolicy);
        Le_WorkID->setFont(font);

        horizontalLayout_6->addWidget(Le_WorkID);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Lb_Dept = new QLabel(layoutWidget);
        Lb_Dept->setObjectName(QString::fromUtf8("Lb_Dept"));
        Lb_Dept->setFont(font);

        horizontalLayout_2->addWidget(Lb_Dept);

        Le_Dept = new QLineEdit(layoutWidget);
        Le_Dept->setObjectName(QString::fromUtf8("Le_Dept"));
        sizePolicy.setHeightForWidth(Le_Dept->sizePolicy().hasHeightForWidth());
        Le_Dept->setSizePolicy(sizePolicy);
        Le_Dept->setFont(font);

        horizontalLayout_2->addWidget(Le_Dept);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        Btn_Register = new QPushButton(layoutWidget);
        Btn_Register->setObjectName(QString::fromUtf8("Btn_Register"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Btn_Register->sizePolicy().hasHeightForWidth());
        Btn_Register->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(20);
        Btn_Register->setFont(font2);
        Btn_Register->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_10->addWidget(Btn_Register);

        Btn_Clear = new QPushButton(layoutWidget);
        Btn_Clear->setObjectName(QString::fromUtf8("Btn_Clear"));
        sizePolicy1.setHeightForWidth(Btn_Clear->sizePolicy().hasHeightForWidth());
        Btn_Clear->setSizePolicy(sizePolicy1);
        Btn_Clear->setFont(font2);
        Btn_Clear->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_10->addWidget(Btn_Clear);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));

        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Lb_Img = new QLabel(layoutWidget);
        Lb_Img->setObjectName(QString::fromUtf8("Lb_Img"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Lb_Img->sizePolicy().hasHeightForWidth());
        Lb_Img->setSizePolicy(sizePolicy2);
        Lb_Img->setStyleSheet(QString::fromUtf8("image: url(:/cam.png);\n"
""));

        verticalLayout_2->addWidget(Lb_Img);

        Le_Path = new QLineEdit(layoutWidget);
        Le_Path->setObjectName(QString::fromUtf8("Le_Path"));

        verticalLayout_2->addWidget(Le_Path);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Btn_AddImg = new QPushButton(layoutWidget);
        Btn_AddImg->setObjectName(QString::fromUtf8("Btn_AddImg"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Btn_AddImg->sizePolicy().hasHeightForWidth());
        Btn_AddImg->setSizePolicy(sizePolicy3);
        Btn_AddImg->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(Btn_AddImg);

        Btn_Cap = new QPushButton(layoutWidget);
        Btn_Cap->setObjectName(QString::fromUtf8("Btn_Cap"));
        sizePolicy3.setHeightForWidth(Btn_Cap->sizePolicy().hasHeightForWidth());
        Btn_Cap->setSizePolicy(sizePolicy3);
        Btn_Cap->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(Btn_Cap);

        Btn_Shot = new QPushButton(layoutWidget);
        Btn_Shot->setObjectName(QString::fromUtf8("Btn_Shot"));
        sizePolicy3.setHeightForWidth(Btn_Shot->sizePolicy().hasHeightForWidth());
        Btn_Shot->setSizePolicy(sizePolicy3);
        Btn_Shot->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(Btn_Shot);


        verticalLayout_2->addLayout(horizontalLayout_7);


        horizontalLayout_3->addLayout(verticalLayout_2);

        widget = new QWidget(Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(510, 620, 120, 80));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", nullptr));
        Lb_Name->setText(QApplication::translate("Register", "\345\247\223\345\220\215", nullptr));
        Le_Name->setText(QString());
        Lb_Identity->setText(QApplication::translate("Register", "\350\272\253\344\273\275", nullptr));
        Le_Identity->setText(QString());
        Lb_WorkId->setText(QApplication::translate("Register", "\345\267\245\345\217\267", nullptr));
        Lb_Dept->setText(QApplication::translate("Register", "\345\255\246\351\231\242", nullptr));
        Le_Dept->setText(QString());
        Btn_Register->setText(QApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        Btn_Clear->setText(QApplication::translate("Register", "\346\270\205\347\251\272", nullptr));
        Lb_Img->setText(QString());
        Le_Path->setText(QString());
        Btn_AddImg->setText(QApplication::translate("Register", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        Btn_Cap->setText(QApplication::translate("Register", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        Btn_Shot->setText(QApplication::translate("Register", "\346\213\215\347\205\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
