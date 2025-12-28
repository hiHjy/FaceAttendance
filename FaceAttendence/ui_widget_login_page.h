/********************************************************************************
** Form generated from reading UI file 'widget_login_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_LOGIN_PAGE_H
#define UI_WIDGET_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_Login_Page
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *lb_manage_img;
    QLabel *label;
    QLineEdit *le_account;
    QLineEdit *le_passwd;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget_Login_Page)
    {
        if (Widget_Login_Page->objectName().isEmpty())
            Widget_Login_Page->setObjectName(QString::fromUtf8("Widget_Login_Page"));
        Widget_Login_Page->resize(800, 480);
        Widget_Login_Page->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #555555;\n"
"    border-radius: 1px; /* \345\217\257\351\200\211\357\274\232\345\234\206\350\247\222 */\n"
"}"));
        widget = new QWidget(Widget_Login_Page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 90, 251, 261));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;  /* \345\233\233\344\270\252\350\247\222\351\203\275\346\230\25710px\345\234\206\350\247\222 */\n"
""));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lb_manage_img = new QLabel(widget);
        lb_manage_img->setObjectName(QString::fromUtf8("lb_manage_img"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_manage_img->sizePolicy().hasHeightForWidth());
        lb_manage_img->setSizePolicy(sizePolicy);
        lb_manage_img->setMinimumSize(QSize(40, 0));
        lb_manage_img->setMaximumSize(QSize(20, 20));
        lb_manage_img->setStyleSheet(QString::fromUtf8("image: url(:/manager.png);"));

        horizontalLayout->addWidget(lb_manage_img);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label, 0, Qt::AlignLeft);


        verticalLayout->addLayout(horizontalLayout);

        le_account = new QLineEdit(widget);
        le_account->setObjectName(QString::fromUtf8("le_account"));
        le_account->setMinimumSize(QSize(0, 30));
        le_account->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(le_account);

        le_passwd = new QLineEdit(widget);
        le_passwd->setObjectName(QString::fromUtf8("le_passwd"));
        le_passwd->setMinimumSize(QSize(0, 30));
        le_passwd->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(le_passwd);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(Widget_Login_Page);

        QMetaObject::connectSlotsByName(Widget_Login_Page);
    } // setupUi

    void retranslateUi(QWidget *Widget_Login_Page)
    {
        Widget_Login_Page->setWindowTitle(QApplication::translate("Widget_Login_Page", "Form", nullptr));
        lb_manage_img->setText(QString());
        label->setText(QApplication::translate("Widget_Login_Page", "\347\256\241\347\220\206\345\221\230", nullptr));
        le_account->setText(QApplication::translate("Widget_Login_Page", "admin", nullptr));
        le_account->setPlaceholderText(QApplication::translate("Widget_Login_Page", "\347\224\250\346\210\267\345\220\215", nullptr));
        le_passwd->setText(QApplication::translate("Widget_Login_Page", "123456", nullptr));
        le_passwd->setPlaceholderText(QApplication::translate("Widget_Login_Page", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("Widget_Login_Page", "\347\231\273  \345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget_Login_Page: public Ui_Widget_Login_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_LOGIN_PAGE_H
