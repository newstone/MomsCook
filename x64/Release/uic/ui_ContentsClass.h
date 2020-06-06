/********************************************************************************
** Form generated from reading UI file 'ContentsClass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENTSCLASS_H
#define UI_CONTENTSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContentsClass
{
public:
    QTextBrowser *contentsTextBrowser;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *dateTextBrowser;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QListWidget *listWidget_1;
    QWidget *tab_2;
    QListWidget *listWidget_2;
    QWidget *tab_3;
    QListWidget *listWidget_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *searchButton;
    QLineEdit *searchLine;
    QPushButton *resetButton;

    void setupUi(QWidget *ContentsClass)
    {
        if (ContentsClass->objectName().isEmpty())
            ContentsClass->setObjectName(QString::fromUtf8("ContentsClass"));
        ContentsClass->resize(667, 398);
        contentsTextBrowser = new QTextBrowser(ContentsClass);
        contentsTextBrowser->setObjectName(QString::fromUtf8("contentsTextBrowser"));
        contentsTextBrowser->setGeometry(QRect(10, 50, 191, 291));
        layoutWidget = new QWidget(ContentsClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(500, 360, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        dateTextBrowser = new QTextBrowser(ContentsClass);
        dateTextBrowser->setObjectName(QString::fromUtf8("dateTextBrowser"));
        dateTextBrowser->setGeometry(QRect(10, 10, 191, 31));
        tabWidget = new QTabWidget(ContentsClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(210, 80, 451, 261));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        listWidget_1 = new QListWidget(tab_1);
        listWidget_1->setObjectName(QString::fromUtf8("listWidget_1"));
        listWidget_1->setGeometry(QRect(0, 0, 451, 241));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        listWidget_2 = new QListWidget(tab_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 451, 241));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        listWidget_3 = new QListWidget(tab_3);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(0, 0, 451, 241));
        tabWidget->addTab(tab_3, QString());
        layoutWidget1 = new QWidget(ContentsClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 50, 231, 18));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget1);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_2->addWidget(radioButton_3);

        searchButton = new QPushButton(ContentsClass);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(570, 10, 75, 31));
        searchLine = new QLineEdit(ContentsClass);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));
        searchLine->setGeometry(QRect(210, 10, 351, 31));
        resetButton = new QPushButton(ContentsClass);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(120, 360, 75, 23));

        retranslateUi(ContentsClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ContentsClass, SLOT(close()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ContentsClass);
    } // setupUi

    void retranslateUi(QWidget *ContentsClass)
    {
        ContentsClass->setWindowTitle(QCoreApplication::translate("ContentsClass", "ContentsClass", nullptr));
        pushButton->setText(QCoreApplication::translate("ContentsClass", "\354\240\200\354\236\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ContentsClass", "\353\202\230\352\260\200\352\270\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("ContentsClass", "\353\260\245", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ContentsClass", "\352\265\255", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ContentsClass", "\353\260\230\354\260\254", nullptr));
        radioButton->setText(QCoreApplication::translate("ContentsClass", "\355\212\271\354\213\235", nullptr));
        radioButton_2->setText(QCoreApplication::translate("ContentsClass", "\352\265\255", nullptr));
        radioButton_3->setText(QCoreApplication::translate("ContentsClass", "\353\260\230\354\260\254", nullptr));
        searchButton->setText(QCoreApplication::translate("ContentsClass", "\352\262\200\354\203\211", nullptr));
        resetButton->setText(QCoreApplication::translate("ContentsClass", "\354\264\210\352\270\260\355\231\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContentsClass: public Ui_ContentsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENTSCLASS_H
