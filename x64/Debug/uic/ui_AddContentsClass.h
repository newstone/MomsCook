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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddContentsClass
{
public:

    void setupUi(QWidget *AddContentsClass)
    {
        if (AddContentsClass->objectName().isEmpty())
            AddContentsClass->setObjectName(QString::fromUtf8("AddContentsClass"));
        AddContentsClass->resize(400, 300);

        retranslateUi(AddContentsClass);

        QMetaObject::connectSlotsByName(AddContentsClass);
    } // setupUi

    void retranslateUi(QWidget *AddContentsClass)
    {
        AddContentsClass->setWindowTitle(QCoreApplication::translate("AddContentsClass", "AddContentsClass", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddContentsClass: public Ui_AddContentsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTENTSCLASS_H
