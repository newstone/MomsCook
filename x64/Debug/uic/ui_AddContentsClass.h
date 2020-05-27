/********************************************************************************
** Form generated from reading UI file 'AddContentsClass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONTENTSCLASS_H
#define UI_ADDCONTENTSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddContentsClass
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QListWidget *listWidget_1;
    QWidget *tab_2;
    QListWidget *listWidget_2;
    QWidget *tab_3;
    QListWidget *listWidget_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AddContentsClass)
    {
        if (AddContentsClass->objectName().isEmpty())
            AddContentsClass->setObjectName(QString::fromUtf8("AddContentsClass"));
        AddContentsClass->resize(475, 388);
        tabWidget = new QTabWidget(AddContentsClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 281, 371));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        listWidget_1 = new QListWidget(tab_1);
        listWidget_1->setObjectName(QString::fromUtf8("listWidget_1"));
        listWidget_1->setGeometry(QRect(0, 0, 281, 351));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        listWidget_2 = new QListWidget(tab_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 281, 351));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        listWidget_3 = new QListWidget(tab_3);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(0, 0, 281, 351));
        tabWidget->addTab(tab_3, QString());
        layoutWidget = new QWidget(AddContentsClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 20, 171, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        layoutWidget1 = new QWidget(AddContentsClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(300, 350, 171, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(AddContentsClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), AddContentsClass, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddContentsClass);
    } // setupUi

    void retranslateUi(QWidget *AddContentsClass)
    {
        AddContentsClass->setWindowTitle(QCoreApplication::translate("AddContentsClass", "AddContentsClass", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("AddContentsClass", "\355\212\271\354\213\235", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AddContentsClass", "\352\265\255", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("AddContentsClass", "\353\260\230\354\260\254", nullptr));
        label->setText(QCoreApplication::translate("AddContentsClass", "\354\235\214\354\213\235 \354\235\264\353\246\204", nullptr));
        label_2->setText(QCoreApplication::translate("AddContentsClass", "\354\235\214\354\213\235 \354\242\205\353\245\230", nullptr));
        radioButton->setText(QCoreApplication::translate("AddContentsClass", "\355\212\271\354\213\235", nullptr));
        radioButton_2->setText(QCoreApplication::translate("AddContentsClass", "\352\265\255", nullptr));
        radioButton_3->setText(QCoreApplication::translate("AddContentsClass", "\353\260\230\354\260\254", nullptr));
        pushButton->setText(QCoreApplication::translate("AddContentsClass", "\354\266\224\352\260\200", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddContentsClass", "\354\242\205\353\243\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddContentsClass: public Ui_AddContentsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTENTSCLASS_H
