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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MomsCookClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MomsCookClass)
    {
        if (MomsCookClass->objectName().isEmpty())
            MomsCookClass->setObjectName(QString::fromUtf8("MomsCookClass"));
        MomsCookClass->resize(600, 400);
        menuBar = new QMenuBar(MomsCookClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MomsCookClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MomsCookClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MomsCookClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MomsCookClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MomsCookClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MomsCookClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MomsCookClass->setStatusBar(statusBar);

        retranslateUi(MomsCookClass);

        QMetaObject::connectSlotsByName(MomsCookClass);
    } // setupUi

    void retranslateUi(QMainWindow *MomsCookClass)
    {
        MomsCookClass->setWindowTitle(QCoreApplication::translate("MomsCookClass", "MomsCook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MomsCookClass: public Ui_MomsCookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOMSCOOK_H
