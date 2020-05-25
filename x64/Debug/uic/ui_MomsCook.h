/********************************************************************************
** Form generated from reading UI file 'MomsCook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOMSCOOK_H
#define UI_MOMSCOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyTextBrowser.h"

QT_BEGIN_NAMESPACE

class Ui_MomsCookClass
{
public:
    QAction *action;
    QWidget *centralWidget;
    QLabel *lbVersion;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_7;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QTextBrowser *textMonth;
    QPushButton *addMenuButton;
    QPushButton *statisticsButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    MyTextBrowser *days_1;
    MyTextBrowser *days_2;
    MyTextBrowser *days_3;
    MyTextBrowser *days_4;
    MyTextBrowser *days_5;
    MyTextBrowser *days_6;
    MyTextBrowser *days_7;
    QHBoxLayout *horizontalLayout_3;
    MyTextBrowser *days_8;
    MyTextBrowser *days_9;
    MyTextBrowser *days_10;
    MyTextBrowser *days_11;
    MyTextBrowser *days_12;
    MyTextBrowser *days_13;
    MyTextBrowser *days_14;
    QHBoxLayout *horizontalLayout_4;
    MyTextBrowser *days_15;
    MyTextBrowser *days_16;
    MyTextBrowser *days_17;
    MyTextBrowser *days_18;
    MyTextBrowser *days_19;
    MyTextBrowser *days_20;
    MyTextBrowser *days_21;
    QHBoxLayout *horizontalLayout_5;
    MyTextBrowser *days_22;
    MyTextBrowser *days_23;
    MyTextBrowser *days_24;
    MyTextBrowser *days_25;
    MyTextBrowser *days_26;
    MyTextBrowser *days_27;
    MyTextBrowser *days_28;
    QHBoxLayout *horizontalLayout_6;
    MyTextBrowser *days_29;
    MyTextBrowser *days_30;
    MyTextBrowser *days_31;
    MyTextBrowser *days_32;
    MyTextBrowser *days_33;
    MyTextBrowser *days_34;
    MyTextBrowser *days_35;
    QHBoxLayout *horizontalLayout_7;
    MyTextBrowser *days_36;
    MyTextBrowser *days_37;
    MyTextBrowser *days_38;
    MyTextBrowser *days_39;
    MyTextBrowser *days_40;
    MyTextBrowser *days_41;
    MyTextBrowser *days_42;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MomsCookClass)
    {
        if (MomsCookClass->objectName().isEmpty())
            MomsCookClass->setObjectName(QString::fromUtf8("MomsCookClass"));
        MomsCookClass->resize(1190, 885);
        MomsCookClass->setFocusPolicy(Qt::WheelFocus);
        action = new QAction(MomsCookClass);
        action->setObjectName(QString::fromUtf8("action"));
        centralWidget = new QWidget(MomsCookClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lbVersion = new QLabel(centralWidget);
        lbVersion->setObjectName(QString::fromUtf8("lbVersion"));
        lbVersion->setGeometry(QRect(40, 20, 56, 12));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 1121, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout_2->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(layoutWidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        horizontalLayout_2->addWidget(textBrowser_2);

        textBrowser_3 = new QTextBrowser(layoutWidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        horizontalLayout_2->addWidget(textBrowser_3);

        textBrowser_4 = new QTextBrowser(layoutWidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        horizontalLayout_2->addWidget(textBrowser_4);

        textBrowser_5 = new QTextBrowser(layoutWidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));

        horizontalLayout_2->addWidget(textBrowser_5);

        textBrowser_6 = new QTextBrowser(layoutWidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));

        horizontalLayout_2->addWidget(textBrowser_6);

        textBrowser_7 = new QTextBrowser(layoutWidget);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));

        horizontalLayout_2->addWidget(textBrowser_7);

        prevButton = new QPushButton(centralWidget);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));
        prevButton->setGeometry(QRect(470, 10, 31, 31));
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(670, 10, 31, 31));
        textMonth = new QTextBrowser(centralWidget);
        textMonth->setObjectName(QString::fromUtf8("textMonth"));
        textMonth->setGeometry(QRect(510, 10, 151, 31));
        addMenuButton = new QPushButton(centralWidget);
        addMenuButton->setObjectName(QString::fromUtf8("addMenuButton"));
        addMenuButton->setGeometry(QRect(980, 20, 75, 23));
        statisticsButton = new QPushButton(centralWidget);
        statisticsButton->setObjectName(QString::fromUtf8("statisticsButton"));
        statisticsButton->setGeometry(QRect(1070, 20, 75, 23));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 110, 1141, 731));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1122, 729));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        layoutWidget1 = new QWidget(scrollAreaWidgetContents);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 1121, 1228));
        sizePolicy.setHeightForWidth(layoutWidget1->sizePolicy().hasHeightForWidth());
        layoutWidget1->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, 4, 4);
        days_1 = new MyTextBrowser(layoutWidget1);
        days_1->setObjectName(QString::fromUtf8("days_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(days_1->sizePolicy().hasHeightForWidth());
        days_1->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(days_1);

        days_2 = new MyTextBrowser(layoutWidget1);
        days_2->setObjectName(QString::fromUtf8("days_2"));
        sizePolicy1.setHeightForWidth(days_2->sizePolicy().hasHeightForWidth());
        days_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(days_2);

        days_3 = new MyTextBrowser(layoutWidget1);
        days_3->setObjectName(QString::fromUtf8("days_3"));
        sizePolicy1.setHeightForWidth(days_3->sizePolicy().hasHeightForWidth());
        days_3->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(days_3);

        days_4 = new MyTextBrowser(layoutWidget1);
        days_4->setObjectName(QString::fromUtf8("days_4"));
        sizePolicy1.setHeightForWidth(days_4->sizePolicy().hasHeightForWidth());
        days_4->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(days_4);

        days_5 = new MyTextBrowser(layoutWidget1);
        days_5->setObjectName(QString::fromUtf8("days_5"));
        sizePolicy1.setHeightForWidth(days_5->sizePolicy().hasHeightForWidth());
        days_5->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(days_5);

        days_6 = new MyTextBrowser(layoutWidget1);
        days_6->setObjectName(QString::fromUtf8("days_6"));
        sizePolicy1.setHeightForWidth(days_6->sizePolicy().hasHeightForWidth());
        days_6->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(days_6);

        days_7 = new MyTextBrowser(layoutWidget1);
        days_7->setObjectName(QString::fromUtf8("days_7"));
        sizePolicy1.setHeightForWidth(days_7->sizePolicy().hasHeightForWidth());
        days_7->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(days_7);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 4, 4, 4);
        days_8 = new MyTextBrowser(layoutWidget1);
        days_8->setObjectName(QString::fromUtf8("days_8"));
        sizePolicy1.setHeightForWidth(days_8->sizePolicy().hasHeightForWidth());
        days_8->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(days_8);

        days_9 = new MyTextBrowser(layoutWidget1);
        days_9->setObjectName(QString::fromUtf8("days_9"));
        sizePolicy1.setHeightForWidth(days_9->sizePolicy().hasHeightForWidth());
        days_9->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(days_9);

        days_10 = new MyTextBrowser(layoutWidget1);
        days_10->setObjectName(QString::fromUtf8("days_10"));
        sizePolicy1.setHeightForWidth(days_10->sizePolicy().hasHeightForWidth());
        days_10->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(days_10);

        days_11 = new MyTextBrowser(layoutWidget1);
        days_11->setObjectName(QString::fromUtf8("days_11"));
        sizePolicy1.setHeightForWidth(days_11->sizePolicy().hasHeightForWidth());
        days_11->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(days_11);

        days_12 = new MyTextBrowser(layoutWidget1);
        days_12->setObjectName(QString::fromUtf8("days_12"));
        sizePolicy1.setHeightForWidth(days_12->sizePolicy().hasHeightForWidth());
        days_12->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(days_12);

        days_13 = new MyTextBrowser(layoutWidget1);
        days_13->setObjectName(QString::fromUtf8("days_13"));
        sizePolicy1.setHeightForWidth(days_13->sizePolicy().hasHeightForWidth());
        days_13->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(days_13);

        days_14 = new MyTextBrowser(layoutWidget1);
        days_14->setObjectName(QString::fromUtf8("days_14"));
        sizePolicy1.setHeightForWidth(days_14->sizePolicy().hasHeightForWidth());
        days_14->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(days_14);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 4, 4, 4);
        days_15 = new MyTextBrowser(layoutWidget1);
        days_15->setObjectName(QString::fromUtf8("days_15"));
        sizePolicy1.setHeightForWidth(days_15->sizePolicy().hasHeightForWidth());
        days_15->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(days_15);

        days_16 = new MyTextBrowser(layoutWidget1);
        days_16->setObjectName(QString::fromUtf8("days_16"));
        sizePolicy1.setHeightForWidth(days_16->sizePolicy().hasHeightForWidth());
        days_16->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(days_16);

        days_17 = new MyTextBrowser(layoutWidget1);
        days_17->setObjectName(QString::fromUtf8("days_17"));
        sizePolicy1.setHeightForWidth(days_17->sizePolicy().hasHeightForWidth());
        days_17->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(days_17);

        days_18 = new MyTextBrowser(layoutWidget1);
        days_18->setObjectName(QString::fromUtf8("days_18"));
        sizePolicy1.setHeightForWidth(days_18->sizePolicy().hasHeightForWidth());
        days_18->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(days_18);

        days_19 = new MyTextBrowser(layoutWidget1);
        days_19->setObjectName(QString::fromUtf8("days_19"));
        sizePolicy1.setHeightForWidth(days_19->sizePolicy().hasHeightForWidth());
        days_19->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(days_19);

        days_20 = new MyTextBrowser(layoutWidget1);
        days_20->setObjectName(QString::fromUtf8("days_20"));
        sizePolicy1.setHeightForWidth(days_20->sizePolicy().hasHeightForWidth());
        days_20->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(days_20);

        days_21 = new MyTextBrowser(layoutWidget1);
        days_21->setObjectName(QString::fromUtf8("days_21"));
        sizePolicy1.setHeightForWidth(days_21->sizePolicy().hasHeightForWidth());
        days_21->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(days_21);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 4, 4, 4);
        days_22 = new MyTextBrowser(layoutWidget1);
        days_22->setObjectName(QString::fromUtf8("days_22"));
        sizePolicy1.setHeightForWidth(days_22->sizePolicy().hasHeightForWidth());
        days_22->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(days_22);

        days_23 = new MyTextBrowser(layoutWidget1);
        days_23->setObjectName(QString::fromUtf8("days_23"));
        sizePolicy1.setHeightForWidth(days_23->sizePolicy().hasHeightForWidth());
        days_23->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(days_23);

        days_24 = new MyTextBrowser(layoutWidget1);
        days_24->setObjectName(QString::fromUtf8("days_24"));
        sizePolicy1.setHeightForWidth(days_24->sizePolicy().hasHeightForWidth());
        days_24->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(days_24);

        days_25 = new MyTextBrowser(layoutWidget1);
        days_25->setObjectName(QString::fromUtf8("days_25"));
        sizePolicy1.setHeightForWidth(days_25->sizePolicy().hasHeightForWidth());
        days_25->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(days_25);

        days_26 = new MyTextBrowser(layoutWidget1);
        days_26->setObjectName(QString::fromUtf8("days_26"));
        sizePolicy1.setHeightForWidth(days_26->sizePolicy().hasHeightForWidth());
        days_26->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(days_26);

        days_27 = new MyTextBrowser(layoutWidget1);
        days_27->setObjectName(QString::fromUtf8("days_27"));
        sizePolicy1.setHeightForWidth(days_27->sizePolicy().hasHeightForWidth());
        days_27->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(days_27);

        days_28 = new MyTextBrowser(layoutWidget1);
        days_28->setObjectName(QString::fromUtf8("days_28"));
        sizePolicy1.setHeightForWidth(days_28->sizePolicy().hasHeightForWidth());
        days_28->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(days_28);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 4, 4, 4);
        days_29 = new MyTextBrowser(layoutWidget1);
        days_29->setObjectName(QString::fromUtf8("days_29"));
        sizePolicy1.setHeightForWidth(days_29->sizePolicy().hasHeightForWidth());
        days_29->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(days_29);

        days_30 = new MyTextBrowser(layoutWidget1);
        days_30->setObjectName(QString::fromUtf8("days_30"));
        sizePolicy1.setHeightForWidth(days_30->sizePolicy().hasHeightForWidth());
        days_30->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(days_30);

        days_31 = new MyTextBrowser(layoutWidget1);
        days_31->setObjectName(QString::fromUtf8("days_31"));
        sizePolicy1.setHeightForWidth(days_31->sizePolicy().hasHeightForWidth());
        days_31->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(days_31);

        days_32 = new MyTextBrowser(layoutWidget1);
        days_32->setObjectName(QString::fromUtf8("days_32"));
        sizePolicy1.setHeightForWidth(days_32->sizePolicy().hasHeightForWidth());
        days_32->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(days_32);

        days_33 = new MyTextBrowser(layoutWidget1);
        days_33->setObjectName(QString::fromUtf8("days_33"));
        sizePolicy1.setHeightForWidth(days_33->sizePolicy().hasHeightForWidth());
        days_33->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(days_33);

        days_34 = new MyTextBrowser(layoutWidget1);
        days_34->setObjectName(QString::fromUtf8("days_34"));
        sizePolicy1.setHeightForWidth(days_34->sizePolicy().hasHeightForWidth());
        days_34->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(days_34);

        days_35 = new MyTextBrowser(layoutWidget1);
        days_35->setObjectName(QString::fromUtf8("days_35"));
        sizePolicy1.setHeightForWidth(days_35->sizePolicy().hasHeightForWidth());
        days_35->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(days_35);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 4, 4, 4);
        days_36 = new MyTextBrowser(layoutWidget1);
        days_36->setObjectName(QString::fromUtf8("days_36"));
        sizePolicy1.setHeightForWidth(days_36->sizePolicy().hasHeightForWidth());
        days_36->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(days_36);

        days_37 = new MyTextBrowser(layoutWidget1);
        days_37->setObjectName(QString::fromUtf8("days_37"));
        sizePolicy1.setHeightForWidth(days_37->sizePolicy().hasHeightForWidth());
        days_37->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(days_37);

        days_38 = new MyTextBrowser(layoutWidget1);
        days_38->setObjectName(QString::fromUtf8("days_38"));
        sizePolicy1.setHeightForWidth(days_38->sizePolicy().hasHeightForWidth());
        days_38->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(days_38);

        days_39 = new MyTextBrowser(layoutWidget1);
        days_39->setObjectName(QString::fromUtf8("days_39"));
        sizePolicy1.setHeightForWidth(days_39->sizePolicy().hasHeightForWidth());
        days_39->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(days_39);

        days_40 = new MyTextBrowser(layoutWidget1);
        days_40->setObjectName(QString::fromUtf8("days_40"));
        sizePolicy1.setHeightForWidth(days_40->sizePolicy().hasHeightForWidth());
        days_40->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(days_40);

        days_41 = new MyTextBrowser(layoutWidget1);
        days_41->setObjectName(QString::fromUtf8("days_41"));
        sizePolicy1.setHeightForWidth(days_41->sizePolicy().hasHeightForWidth());
        days_41->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(days_41);

        days_42 = new MyTextBrowser(layoutWidget1);
        days_42->setObjectName(QString::fromUtf8("days_42"));
        sizePolicy1.setHeightForWidth(days_42->sizePolicy().hasHeightForWidth());
        days_42->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(days_42);


        verticalLayout->addLayout(horizontalLayout_7);

        scrollArea->setWidget(scrollAreaWidgetContents);
        MomsCookClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MomsCookClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1190, 21));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        MomsCookClass->setMenuBar(menuBar);
        toolBar = new QToolBar(MomsCookClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMouseTracking(true);
        toolBar->setTabletTracking(true);
        toolBar->setAutoFillBackground(false);
        MomsCookClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_F->menuAction());
        menu_F->addAction(action);

        retranslateUi(MomsCookClass);

        QMetaObject::connectSlotsByName(MomsCookClass);
    } // setupUi

    void retranslateUi(QMainWindow *MomsCookClass)
    {
        MomsCookClass->setWindowTitle(QCoreApplication::translate("MomsCookClass", "MomsCook", nullptr));
        action->setText(QCoreApplication::translate("MomsCookClass", "\354\242\205\353\243\214", nullptr));
        lbVersion->setText(QCoreApplication::translate("MomsCookClass", "v0.0.1", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MomsCookClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gulim'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\354\233\224</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MomsCookClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gulim'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\355\231\224</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MomsCookClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gulim'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\354\210\230</span></p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("MomsCookClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gulim'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\353\252\251</span></p></body></html>", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("MomsCookClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gulim'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\352\270\210</span></p></body></html>", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("MomsCookClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gulim'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\355\206\240</span></p></body></html>", nullptr));
        textBrowser_7->setHtml(QCoreApplication::translate("MomsCookClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gulim'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\354\235\274</span></p></body></html>", nullptr));
        prevButton->setText(QCoreApplication::translate("MomsCookClass", "\342\227\200", nullptr));
        nextButton->setText(QCoreApplication::translate("MomsCookClass", "\342\226\266", nullptr));
        addMenuButton->setText(QCoreApplication::translate("MomsCookClass", "\353\251\224\353\211\264 \354\266\224\352\260\200", nullptr));
        statisticsButton->setText(QCoreApplication::translate("MomsCookClass", "\355\206\265\352\263\204", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MomsCookClass", "\355\214\214\354\235\274(F)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MomsCookClass: public Ui_MomsCookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOMSCOOK_H
