/********************************************************************************
** Form generated from reading UI file 'AdContentsClass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCONTENTSCLASS_H
#define UI_ADCONTENTSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdContentsClass
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QWidget *tab_2;
    QListWidget *listWidget_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *AdContentsClass)
    {
        if (AdContentsClass->objectName().isEmpty())
            AdContentsClass->setObjectName(QString::fromUtf8("AdContentsClass"));
        AdContentsClass->resize(636, 442);
        tabWidget = new QTabWidget(AdContentsClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 281, 421));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 281, 401));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        listWidget_2 = new QListWidget(tab_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 281, 401));
        tabWidget->addTab(tab_2, QString());
        lineEdit = new QLineEdit(AdContentsClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(400, 30, 221, 20));
        label = new QLabel(AdContentsClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 30, 56, 21));
        label_2 = new QLabel(AdContentsClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 70, 56, 16));
        widget = new QWidget(AdContentsClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(460, 400, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        widget1 = new QWidget(AdContentsClass);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(400, 70, 131, 18));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget1);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_2->addWidget(radioButton_3);


        retranslateUi(AdContentsClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdContentsClass);
    } // setupUi

    void retranslateUi(QWidget *AdContentsClass)
    {
        AdContentsClass->setWindowTitle(QCoreApplication::translate("AdContentsClass", "AdContentsClass", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AdContentsClass", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AdContentsClass", "Tab 2", nullptr));
        label->setText(QCoreApplication::translate("AdContentsClass", "\354\235\214\354\213\235 \354\235\264\353\246\204", nullptr));
        label_2->setText(QCoreApplication::translate("AdContentsClass", "\354\235\214\354\213\235 \354\242\205\353\245\230", nullptr));
        pushButton->setText(QCoreApplication::translate("AdContentsClass", "\354\240\200\354\236\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdContentsClass", "\353\202\230\352\260\200\352\270\260", nullptr));
        radioButton->setText(QCoreApplication::translate("AdContentsClass", "\353\260\245", nullptr));
        radioButton_2->setText(QCoreApplication::translate("AdContentsClass", "\352\265\255", nullptr));
        radioButton_3->setText(QCoreApplication::translate("AdContentsClass", "\353\260\230\354\260\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdContentsClass: public Ui_AdContentsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCONTENTSCLASS_H
