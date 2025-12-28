/********************************************************************************
** Form generated from reading UI file 'faceattendence.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEATTENDENCE_H
#define UI_FACEATTENDENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceAttendence
{
public:
    QWidget *centralwidget;
    QWidget *camera;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *yes;
    QLabel *success;
    QSpacerItem *horizontalSpacer_2;
    QLabel *head_cap_img;
    QLabel *videoLb;
    QWidget *widget;
    QLabel *headline;
    QLabel *head_image;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *LE_identity;
    QWidget *widget_4;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *LE_Work_ID;
    QWidget *widget_6;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *LE_Dept;
    QWidget *widget_9;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *LE_Name;

    void setupUi(QMainWindow *FaceAttendence)
    {
        if (FaceAttendence->objectName().isEmpty())
            FaceAttendence->setObjectName(QString::fromUtf8("FaceAttendence"));
        FaceAttendence->setEnabled(true);
        FaceAttendence->resize(800, 480);
        centralwidget = new QWidget(FaceAttendence);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        camera = new QWidget(centralwidget);
        camera->setObjectName(QString::fromUtf8("camera"));
        camera->setEnabled(true);
        camera->setGeometry(QRect(0, 0, 480, 480));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(camera->sizePolicy().hasHeightForWidth());
        camera->setSizePolicy(sizePolicy);
        camera->setMinimumSize(QSize(480, 480));
        camera->setMaximumSize(QSize(480, 480));
        camera->setStyleSheet(QString::fromUtf8(""));
        widget_2 = new QWidget(camera);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setEnabled(false);
        widget_2->setGeometry(QRect(100, 370, 271, 71));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color: rgba(49, 50, 54,70);"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        yes = new QLabel(widget_2);
        yes->setObjectName(QString::fromUtf8("yes"));
        yes->setMinimumSize(QSize(31, 21));
        yes->setMaximumSize(QSize(31, 21));
        yes->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(49, 50, 54,0);\n"
"border-image: url(:/yes.png);\n"
""));

        horizontalLayout->addWidget(yes);

        success = new QLabel(widget_2);
        success->setObjectName(QString::fromUtf8("success"));
        success->setStyleSheet(QString::fromUtf8("font: 25 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(49, 50, 54,0);\n"
"border:none;"));

        horizontalLayout->addWidget(success);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        head_cap_img = new QLabel(camera);
        head_cap_img->setObjectName(QString::fromUtf8("head_cap_img"));
        head_cap_img->setGeometry(QRect(110, 70, 266, 266));
        head_cap_img->setStyleSheet(QString::fromUtf8("border-image: url(:/crc.png);"));
        videoLb = new QLabel(camera);
        videoLb->setObjectName(QString::fromUtf8("videoLb"));
        videoLb->setEnabled(true);
        videoLb->setGeometry(QRect(0, 0, 480, 480));
        videoLb->raise();
        widget_2->raise();
        head_cap_img->raise();
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(480, 0, 320, 480));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 1px solid #313236;\n"
"\n"
"	\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QWidget#headline{\n"
"	\n"
"	font: 24pt \"Ubuntu\";\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"QWidget#head_image{\n"
"	\n"
"	border-radius:74px;\n"
"\n"
"\n"
"}"));
        headline = new QLabel(widget);
        headline->setObjectName(QString::fromUtf8("headline"));
        headline->setGeometry(QRect(10, 0, 301, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        headline->setFont(font);
        headline->setAlignment(Qt::AlignCenter);
        head_image = new QLabel(widget);
        head_image->setObjectName(QString::fromUtf8("head_image"));
        head_image->setGeometry(QRect(70, 70, 150, 150));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 230, 301, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(layoutWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setEnabled(false);
        widget_3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 1px solid #313236;\n"
"    padding: 5px; /* \346\267\273\345\212\240\345\206\205\350\276\271\350\267\235 */\n"
"    margin: 1px;  /* \346\267\273\345\212\240\345\244\226\350\276\271\350\267\235 */\n"
"	border-radius:4px;\n"
"	\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel {\n"
"    border: none;\n"
"    color: rgb(125, 100, 127);\n"
"    \n"
"}\n"
"QLineEdit {\n"
"	border:none;\n"
"	\n"
"	font: bold 10pt \"Ubuntu\";\n"
"\n"
"	color:rgb(255,255,255)\n"
"\n"
"}\n"
""));
        layoutWidget1 = new QWidget(widget_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 250, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        LE_identity = new QLineEdit(layoutWidget1);
        LE_identity->setObjectName(QString::fromUtf8("LE_identity"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LE_identity->sizePolicy().hasHeightForWidth());
        LE_identity->setSizePolicy(sizePolicy1);
        LE_identity->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(LE_identity);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(layoutWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 1px solid #313236;\n"
"    padding: 5px; /* \346\267\273\345\212\240\345\206\205\350\276\271\350\267\235 */\n"
"    margin: 1px;  /* \346\267\273\345\212\240\345\244\226\350\276\271\350\267\235 */\n"
"	border-radius:4px;\n"
"	\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel {\n"
"    border: none;\n"
"    font: bold 12pt \"Ubuntu\";\n"
"    color: rgb(125, 100, 127);\n"
"  \n"
"    \n"
"}\n"
"QLineEdit {\n"
"	border:none;\n"
"	\n"
"	font: bold 10pt \"Ubuntu\";\n"
"\n"
" \n"
"	color:rgb(255,255,255)\n"
"\n"
"}\n"
""));
        layoutWidget_4 = new QWidget(widget_4);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 10, 250, 41));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_6->setFont(font1);

        horizontalLayout_6->addWidget(label_6);

        LE_Work_ID = new QLineEdit(layoutWidget_4);
        LE_Work_ID->setObjectName(QString::fromUtf8("LE_Work_ID"));
        LE_Work_ID->setEnabled(false);
        sizePolicy1.setHeightForWidth(LE_Work_ID->sizePolicy().hasHeightForWidth());
        LE_Work_ID->setSizePolicy(sizePolicy1);
        LE_Work_ID->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(LE_Work_ID);


        verticalLayout->addWidget(widget_4);

        widget_6 = new QWidget(layoutWidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 1px solid #313236;\n"
"    padding: 5px; /* \346\267\273\345\212\240\345\206\205\350\276\271\350\267\235 */\n"
"    margin: 1px;  /* \346\267\273\345\212\240\345\244\226\350\276\271\350\267\235 */\n"
"	border-radius:4px;\n"
"	\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel {\n"
"    border: none;\n"
"    font: bold 12pt \"Ubuntu\";\n"
"    color: rgb(125, 100, 127);\n"
"   \n"
"    \n"
"}\n"
"QLineEdit {\n"
"	border:none;\n"
"	\n"
"	font: bold 10pt \"Ubuntu\";\n"
"\n"
"  \n"
"	color:rgb(255,255,255)\n"
"\n"
"}\n"
""));
        layoutWidget_7 = new QWidget(widget_6);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(0, 10, 250, 41));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout_9->addWidget(label_9);

        LE_Dept = new QLineEdit(layoutWidget_7);
        LE_Dept->setObjectName(QString::fromUtf8("LE_Dept"));
        LE_Dept->setEnabled(false);
        sizePolicy1.setHeightForWidth(LE_Dept->sizePolicy().hasHeightForWidth());
        LE_Dept->setSizePolicy(sizePolicy1);
        LE_Dept->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(LE_Dept);


        verticalLayout->addWidget(widget_6);

        widget_9 = new QWidget(layoutWidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 1px solid #313236;\n"
"    padding: 5px; /* \346\267\273\345\212\240\345\206\205\350\276\271\350\267\235 */\n"
"    margin: 1px;  /* \346\267\273\345\212\240\345\244\226\350\276\271\350\267\235 */\n"
"	border-radius:4px;\n"
"	\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel {\n"
"    border: none;\n"
"    font: bold 12pt \"Ubuntu\";\n"
"    color: rgb(125, 100, 127);\n"
"   \n"
"    \n"
"}\n"
"QLineEdit {\n"
"	border:none;\n"
"	\n"
"	font: bold 10pt \"Ubuntu\";\n"
"\n"
"	color:rgb(255,255,255)\n"
"\n"
"}\n"
""));
        layoutWidget_8 = new QWidget(widget_9);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(0, 10, 250, 41));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        LE_Name = new QLineEdit(layoutWidget_8);
        LE_Name->setObjectName(QString::fromUtf8("LE_Name"));
        LE_Name->setEnabled(false);
        sizePolicy1.setHeightForWidth(LE_Name->sizePolicy().hasHeightForWidth());
        LE_Name->setSizePolicy(sizePolicy1);
        LE_Name->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(LE_Name);


        verticalLayout->addWidget(widget_9);

        FaceAttendence->setCentralWidget(centralwidget);

        retranslateUi(FaceAttendence);

        QMetaObject::connectSlotsByName(FaceAttendence);
    } // setupUi

    void retranslateUi(QMainWindow *FaceAttendence)
    {
        FaceAttendence->setWindowTitle(QApplication::translate("FaceAttendence", "FaceAttendence", nullptr));
        yes->setText(QString());
        success->setText(QApplication::translate("FaceAttendence", "\350\256\244\350\257\201\346\210\220\345\212\237", nullptr));
        head_cap_img->setText(QString());
        videoLb->setText(QString());
        headline->setText(QApplication::translate("FaceAttendence", "\344\272\272\350\204\270\350\257\206\345\210\253\347\263\273\347\273\237", nullptr));
        head_image->setText(QString());
        label_3->setText(QApplication::translate("FaceAttendence", "\350\272\253\344\273\275", nullptr));
        LE_identity->setText(QString());
        label_6->setText(QApplication::translate("FaceAttendence", "\345\267\245\345\217\267", nullptr));
        LE_Work_ID->setText(QString());
        label_9->setText(QApplication::translate("FaceAttendence", "\345\255\246\351\231\242", nullptr));
        LE_Dept->setText(QString());
        label_10->setText(QApplication::translate("FaceAttendence", "\345\247\223\345\220\215", nullptr));
        LE_Name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FaceAttendence: public Ui_FaceAttendence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEATTENDENCE_H
