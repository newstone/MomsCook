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
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "MyTextBrowser.h"

QT_BEGIN_NAMESPACE

#define DAYS 42
#define LAYOUTS 6
#define WEEK 7

class Ui_MomsCookClass
{
public:
    QAction* action;
    QWidget* centralWidget;
    QLabel* lbVersion;
    QWidget* layoutWidget;
    QHBoxLayout* horizontalLayout_2;
    QTextBrowser* textBrowser;
    QTextBrowser* textBrowser_2;
    QTextBrowser* textBrowser_3;
    QTextBrowser* textBrowser_4;
    QTextBrowser* textBrowser_5;
    QTextBrowser* textBrowser_6;
    QTextBrowser* textBrowser_7;
    QPushButton* prevButton;
    QPushButton* nextButton;
    QPushButton* addMenuButton;
    QPushButton* statisticsButton;
    QTextBrowser* textMonth;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents_2;
    QWidget* layoutWidget_2;
    QVBoxLayout* verticalLayout_3;
    MyTextBrowser** days;
    QHBoxLayout** horizontalLayouts;
    QScrollBar* verticalScrollBar;
    QMenuBar* menuBar;
    QMenu* menu_F;
    QToolBar* toolBar;

    void setupUi(QMainWindow* MomsCookClass)
    {
        if (MomsCookClass->objectName().isEmpty())
            MomsCookClass->setObjectName(QString::fromUtf8("MomsCookClass"));
        MomsCookClass->resize(1162, 920);
        action = new QAction(MomsCookClass);
        action->setObjectName(QString::fromUtf8("action"));
        centralWidget = new QWidget(MomsCookClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lbVersion = new QLabel(centralWidget);
        lbVersion->setObjectName(QString::fromUtf8("lbVersion"));
        lbVersion->setGeometry(QRect(20, 20, 56, 12));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 1111, 41));
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
        prevButton->setGeometry(QRect(450, 10, 31, 31));
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(650, 10, 31, 31));
        textMonth = new QTextBrowser(centralWidget);
        textMonth->setObjectName(QString::fromUtf8("textMonth"));
        textMonth->setGeometry(QRect(490, 10, 151, 31));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 110, 1131, 751));
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1129, 749));
        layoutWidget_2 = new QWidget(scrollAreaWidgetContents_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 1111, 861));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);

        days = new MyTextBrowser * [DAYS];
        horizontalLayouts = new QHBoxLayout * [LAYOUTS];

        for (unsigned int l = 0; l < LAYOUTS; ++l) {
            QString strLayout = "horizontalLayout";
            strLayout += std::to_string(l).c_str();
            horizontalLayouts[l] = new QHBoxLayout();
            horizontalLayouts[l]->setSpacing(6);
            horizontalLayouts[l]->setObjectName(strLayout);
            horizontalLayouts[l]->setContentsMargins(4, 4, 4, 4);
            for (unsigned int d = 0; d < WEEK; ++d) {
                QString strDays = "horizontalLayout";
                strLayout += std::to_string(l * WEEK + d).c_str();
                days[l * WEEK + d] = new MyTextBrowser(layoutWidget_2);
                days[l * WEEK + d]->setObjectName(strDays);
                horizontalLayouts[l]->addWidget(days[l * WEEK + d]);
            }
            verticalLayout_3->addLayout(horizontalLayouts[l]);
        }

        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents_2);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(1110, 0, 21, 751));
        verticalScrollBar->setOrientation(Qt::Vertical);
        scrollArea->setWidget(layoutWidget_2);
        addMenuButton = new QPushButton(centralWidget);
        addMenuButton->setObjectName(QString::fromUtf8("pushButton"));
        addMenuButton->setGeometry(QRect(960, 20, 75, 23));
        statisticsButton = new QPushButton(centralWidget);
        statisticsButton->setObjectName(QString::fromUtf8("pushButton_2"));
        statisticsButton->setGeometry(QRect(1050, 20, 75, 23));

        MomsCookClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MomsCookClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1162, 21));
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

    void retranslateUi(QMainWindow* MomsCookClass)
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
    class MomsCookClass : public Ui_MomsCookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOMSCOOK_H
