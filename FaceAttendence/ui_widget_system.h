/********************************************************************************
** Form generated from reading UI file 'widget_system.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SYSTEM_H
#define UI_WIDGET_SYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_System
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QPushButton *btn_net;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QPushButton *btn_poweroff;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QPushButton *btn_restart;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *label_2;

    void setupUi(QWidget *Widget_System)
    {
        if (Widget_System->objectName().isEmpty())
            Widget_System->setObjectName(QString::fromUtf8("Widget_System"));
        Widget_System->resize(800, 480);
        Widget_System->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(Widget_System);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(260, 120, 291, 271));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(50, 16777215));
        QFont font;
        font.setPointSize(16);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/global-network.png);"));

        horizontalLayout->addWidget(label_7);

        btn_net = new QPushButton(widget);
        btn_net->setObjectName(QString::fromUtf8("btn_net"));
        btn_net->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(btn_net);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(50, 16777215));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/power-on.png);"));

        horizontalLayout_2->addWidget(label_6);

        btn_poweroff = new QPushButton(widget);
        btn_poweroff->setObjectName(QString::fromUtf8("btn_poweroff"));
        btn_poweroff->setMinimumSize(QSize(0, 50));

        horizontalLayout_2->addWidget(btn_poweroff);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(50, 16777215));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/power.png);"));

        horizontalLayout_3->addWidget(label_5);

        btn_restart = new QPushButton(widget);
        btn_restart->setObjectName(QString::fromUtf8("btn_restart"));
        btn_restart->setMinimumSize(QSize(0, 50));

        horizontalLayout_3->addWidget(btn_restart);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget = new QWidget(Widget_System);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 0, 141, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(100, 100));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/configuration.png);"));

        horizontalLayout_4->addWidget(label_8);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 100));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        horizontalLayout_4->addWidget(label_2);


        retranslateUi(Widget_System);

        QMetaObject::connectSlotsByName(Widget_System);
    } // setupUi

    void retranslateUi(QWidget *Widget_System)
    {
        Widget_System->setWindowTitle(QApplication::translate("Widget_System", "Form", nullptr));
        label_7->setText(QString());
        btn_net->setText(QApplication::translate("Widget_System", "\351\207\215\350\277\236\347\275\221\347\273\234", nullptr));
        label_6->setText(QString());
        btn_poweroff->setText(QApplication::translate("Widget_System", "\345\205\263\351\227\255\350\256\276\345\244\207", nullptr));
        label_5->setText(QString());
        btn_restart->setText(QApplication::translate("Widget_System", "\351\207\215\345\220\257\350\256\276\345\244\207", nullptr));
        label_8->setText(QString());
        label_2->setText(QApplication::translate("Widget_System", "\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget_System: public Ui_Widget_System {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SYSTEM_H
