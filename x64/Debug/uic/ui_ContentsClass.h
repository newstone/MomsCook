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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContentsClass
{
public:
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ContentsClass)
    {
        if (ContentsClass->objectName().isEmpty())
            ContentsClass->setObjectName(QString::fromUtf8("ContentsClass"));
        ContentsClass->resize(562, 398);
        textBrowser = new QTextBrowser(ContentsClass);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 451, 371));
        widget = new QWidget(ContentsClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(470, 330, 77, 54));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(ContentsClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ContentsClass, SLOT(close()));

        QMetaObject::connectSlotsByName(ContentsClass);
    } // setupUi

    void retranslateUi(QWidget *ContentsClass)
    {
        ContentsClass->setWindowTitle(QCoreApplication::translate("ContentsClass", "ContentsClass", nullptr));
        pushButton->setText(QCoreApplication::translate("ContentsClass", "\354\240\200\354\236\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ContentsClass", "\353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContentsClass: public Ui_ContentsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENTSCLASS_H
