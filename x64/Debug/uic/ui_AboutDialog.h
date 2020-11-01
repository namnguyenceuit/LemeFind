/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *version_Label;
    QLabel *label;

    void setupUi(QWidget *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(252, 157);
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(35, 50, 181, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("OCR A Extended"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70)"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 100, 180, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70)"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(75, 75, 101, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70)"));
        label_4->setAlignment(Qt::AlignCenter);
        version_Label = new QLabel(AboutDialog);
        version_Label->setObjectName(QString::fromUtf8("version_Label"));
        version_Label->setGeometry(QRect(73, 120, 100, 20));
        version_Label->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70)"));
        version_Label->setAlignment(Qt::AlignCenter);
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 131, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70)"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QWidget *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "AboutLemeFind", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "Developed by @TocarElCielo", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "Copyright \302\251 2020 All rights reserved", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "No License Required", nullptr));
        version_Label->setText(QCoreApplication::translate("AboutDialog", "Version 1.0", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "LemeFind", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
