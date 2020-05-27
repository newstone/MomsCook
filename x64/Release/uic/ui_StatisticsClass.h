/********************************************************************************
** Form generated from reading UI file 'StatisticsClass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICSCLASS_H
#define UI_STATISTICSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticsClass
{
public:

    void setupUi(QWidget *StatisticsClass)
    {
        if (StatisticsClass->objectName().isEmpty())
            StatisticsClass->setObjectName(QString::fromUtf8("StatisticsClass"));
        StatisticsClass->resize(661, 437);

        retranslateUi(StatisticsClass);

        QMetaObject::connectSlotsByName(StatisticsClass);
    } // setupUi

    void retranslateUi(QWidget *StatisticsClass)
    {
        StatisticsClass->setWindowTitle(QCoreApplication::translate("StatisticsClass", "StatisticsClass", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatisticsClass: public Ui_StatisticsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICSCLASS_H
