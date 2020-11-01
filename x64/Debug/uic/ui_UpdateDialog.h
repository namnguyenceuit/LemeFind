/********************************************************************************
** Form generated from reading UI file 'UpdateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QLabel *updateMsg_Label;
    QPushButton *updateButton;

    void setupUi(QWidget *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName(QString::fromUtf8("UpdateDialog"));
        UpdateDialog->resize(312, 81);
        updateMsg_Label = new QLabel(UpdateDialog);
        updateMsg_Label->setObjectName(QString::fromUtf8("updateMsg_Label"));
        updateMsg_Label->setGeometry(QRect(19, 10, 271, 21));
        updateMsg_Label->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70)"));
        updateMsg_Label->setAlignment(Qt::AlignCenter);
        updateButton = new QPushButton(UpdateDialog);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(120, 40, 75, 25));
        updateButton->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70)"));

        retranslateUi(UpdateDialog);

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QWidget *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QCoreApplication::translate("UpdateDialog", "Check for updates", nullptr));
        updateMsg_Label->setText(QCoreApplication::translate("UpdateDialog", "Your version is the latest. No need to update", nullptr));
        updateButton->setText(QCoreApplication::translate("UpdateDialog", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
