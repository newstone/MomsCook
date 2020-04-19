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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContentsClass
{
public:
    QTextBrowser *contentsTextBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;

    QWidget** tabs;
    QScrollArea** scrollAreas;
    QWidget** scrollAreaWidgetContents;
    QListView** listViews;
    QScrollBar** verticalScrollBars;

    QTextBrowser *dateTextBrowser;

    void setupUi(QWidget *ContentsClass)
    {
        if (ContentsClass->objectName().isEmpty())
            ContentsClass->setObjectName(QString::fromUtf8("ContentsClass"));
        ContentsClass->resize(800, 398);
        contentsTextBrowser = new QTextBrowser(ContentsClass);
        contentsTextBrowser->setObjectName(QString::fromUtf8("contentsTextBrowser"));
        contentsTextBrowser->setGeometry(QRect(10, 50, 191, 331));
        layoutWidget = new QWidget(ContentsClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(680, 330, 111, 54));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        tabWidget = new QTabWidget(ContentsClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(220, 50, 331, 331));

        tabs = new QWidget*[5];
        scrollAreas = new QScrollArea*[5];
        scrollAreaWidgetContents = new QWidget*[5];
        listViews = new QListView*[5];
        verticalScrollBars = new QScrollBar*[5];

        for (unsigned int i = 0; i < 5; ++i) {
            tabs[i] = new QWidget();
            tabs[i]->setObjectName(QString::fromUtf8("tabs"));
            scrollAreas[i] = new QScrollArea(tabs[i]);
            scrollAreas[i]->setObjectName(QString::fromUtf8("scrollAreas"));
            scrollAreas[i]->setGeometry(QRect(0, 0, 311, 311));
            scrollAreas[i]->setWidgetResizable(true);
            scrollAreaWidgetContents[i] = new QWidget();
            scrollAreaWidgetContents[i]->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
            scrollAreaWidgetContents[i]->setGeometry(QRect(0, 0, 309, 309));
            listViews[i] = new QListView(scrollAreaWidgetContents[i]);
            listViews[i]->setObjectName(QString::fromUtf8("listViews"));
            listViews[i]->setGeometry(QRect(0, 0, 311, 311));
            scrollAreas[i]->setWidget(scrollAreaWidgetContents[i]);
            verticalScrollBars[i] = new QScrollBar(tabs[i]);
            verticalScrollBars[i]->setObjectName(QString::fromUtf8("verticalScrollBars"));
            verticalScrollBars[i]->setGeometry(QRect(310, 0, 16, 311));
            verticalScrollBars[i]->setOrientation(Qt::Vertical);
            tabWidget->addTab(tabs[i], QString());
        }

        dateTextBrowser = new QTextBrowser(ContentsClass);
        dateTextBrowser->setObjectName(QString::fromUtf8("dateTextBrowser"));
        dateTextBrowser->setGeometry(QRect(10, 10, 256, 31));

        retranslateUi(ContentsClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ContentsClass, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ContentsClass);
    } // setupUi

    void retranslateUi(QWidget *ContentsClass)
    {
        ContentsClass->setWindowTitle(QCoreApplication::translate("ContentsClass", "ContentsClass", nullptr));
        pushButton->setText(QCoreApplication::translate("ContentsClass", "\354\240\200\354\236\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ContentsClass", "\353\202\230\352\260\200\352\270\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabs[0]), QCoreApplication::translate("ContentsClass", QString::fromLocal8Bit("밥").toStdString().c_str(), nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabs[1]), QCoreApplication::translate("ContentsClass", QString::fromLocal8Bit("국").toStdString().c_str(), nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabs[2]), QCoreApplication::translate("ContentsClass", QString::fromLocal8Bit("반찬1").toStdString().c_str(), nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabs[3]), QCoreApplication::translate("ContentsClass", QString::fromLocal8Bit("반찬2").toStdString().c_str(), nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabs[4]), QCoreApplication::translate("ContentsClass", QString::fromLocal8Bit("반찬3").toStdString().c_str(), nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContentsClass: public Ui_ContentsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENTSCLASS_H
