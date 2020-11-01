/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionOptions;
    QAction *actionReadme;
    QAction *action;
    QAction *actionCheck_for_updates_2;
    QAction *actionUpdate;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QCheckBox *ignoreCmt_checkBox_2;
    QComboBox *operator_comboBox_2;
    QLineEdit *number1_textBox_2;
    QCheckBox *numOfResults_checkBox_2;
    QLabel *label_7;
    QLineEdit *number2_textBox_2;
    QCheckBox *caseSensitive_checkBox_2;
    QCheckBox *wholeWord_checkBox_2;
    QGroupBox *groupBox_4;
    QLabel *label_8;
    QComboBox *fileToInclude_comboBox_2;
    QComboBox *fileToExclude_comboBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox;
    QPushButton *listSearchFileBrowse_Button_2;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *listSearchFile_comboBox_2;
    QComboBox *directory_comboBox_2;
    QPushButton *directoryBrowse_Button_2;
    QGroupBox *groupBox_3;
    QPlainTextEdit *consoleBox_2;
    QProgressBar *progressBar_2;
    QPushButton *search_Button_2;
    QLabel *fileName_Label_2;
    QPushButton *output_Button_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(443, 555);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionReadme = new QAction(MainWindow);
        actionReadme->setObjectName(QString::fromUtf8("actionReadme"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action->setEnabled(false);
        actionCheck_for_updates_2 = new QAction(MainWindow);
        actionCheck_for_updates_2->setObjectName(QString::fromUtf8("actionCheck_for_updates_2"));
        actionUpdate = new QAction(MainWindow);
        actionUpdate->setObjectName(QString::fromUtf8("actionUpdate"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 230, 421, 81));
        ignoreCmt_checkBox_2 = new QCheckBox(groupBox_2);
        ignoreCmt_checkBox_2->setObjectName(QString::fromUtf8("ignoreCmt_checkBox_2"));
        ignoreCmt_checkBox_2->setGeometry(QRect(10, 20, 101, 17));
        operator_comboBox_2 = new QComboBox(groupBox_2);
        operator_comboBox_2->setObjectName(QString::fromUtf8("operator_comboBox_2"));
        operator_comboBox_2->setGeometry(QRect(120, 50, 141, 22));
        number1_textBox_2 = new QLineEdit(groupBox_2);
        number1_textBox_2->setObjectName(QString::fromUtf8("number1_textBox_2"));
        number1_textBox_2->setGeometry(QRect(270, 50, 51, 21));
        numOfResults_checkBox_2 = new QCheckBox(groupBox_2);
        numOfResults_checkBox_2->setObjectName(QString::fromUtf8("numOfResults_checkBox_2"));
        numOfResults_checkBox_2->setGeometry(QRect(10, 53, 111, 17));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(332, 52, 21, 16));
        number2_textBox_2 = new QLineEdit(groupBox_2);
        number2_textBox_2->setObjectName(QString::fromUtf8("number2_textBox_2"));
        number2_textBox_2->setGeometry(QRect(360, 50, 51, 21));
        caseSensitive_checkBox_2 = new QCheckBox(groupBox_2);
        caseSensitive_checkBox_2->setObjectName(QString::fromUtf8("caseSensitive_checkBox_2"));
        caseSensitive_checkBox_2->setGeometry(QRect(120, 20, 101, 17));
        wholeWord_checkBox_2 = new QCheckBox(groupBox_2);
        wholeWord_checkBox_2->setObjectName(QString::fromUtf8("wholeWord_checkBox_2"));
        wholeWord_checkBox_2->setGeometry(QRect(220, 20, 101, 17));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 120, 421, 101));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 81, 21));
        fileToInclude_comboBox_2 = new QComboBox(groupBox_4);
        fileToInclude_comboBox_2->setObjectName(QString::fromUtf8("fileToInclude_comboBox_2"));
        fileToInclude_comboBox_2->setGeometry(QRect(100, 20, 311, 22));
        fileToInclude_comboBox_2->setEditable(true);
        fileToExclude_comboBox_2 = new QComboBox(groupBox_4);
        fileToExclude_comboBox_2->setObjectName(QString::fromUtf8("fileToExclude_comboBox_2"));
        fileToExclude_comboBox_2->setGeometry(QRect(100, 50, 311, 22));
        fileToExclude_comboBox_2->setEditable(true);
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 50, 81, 21));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 70, 301, 21));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 421, 101));
        listSearchFileBrowse_Button_2 = new QPushButton(groupBox);
        listSearchFileBrowse_Button_2->setObjectName(QString::fromUtf8("listSearchFileBrowse_Button_2"));
        listSearchFileBrowse_Button_2->setGeometry(QRect(390, 20, 20, 22));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 71, 21));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 60, 91, 21));
        listSearchFile_comboBox_2 = new QComboBox(groupBox);
        listSearchFile_comboBox_2->setObjectName(QString::fromUtf8("listSearchFile_comboBox_2"));
        listSearchFile_comboBox_2->setGeometry(QRect(100, 20, 281, 22));
        listSearchFile_comboBox_2->setEditable(true);
        directory_comboBox_2 = new QComboBox(groupBox);
        directory_comboBox_2->setObjectName(QString::fromUtf8("directory_comboBox_2"));
        directory_comboBox_2->setGeometry(QRect(100, 60, 281, 22));
        directory_comboBox_2->setEditable(true);
        directoryBrowse_Button_2 = new QPushButton(groupBox);
        directoryBrowse_Button_2->setObjectName(QString::fromUtf8("directoryBrowse_Button_2"));
        directoryBrowse_Button_2->setGeometry(QRect(390, 60, 20, 22));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 320, 421, 171));
        consoleBox_2 = new QPlainTextEdit(groupBox_3);
        consoleBox_2->setObjectName(QString::fromUtf8("consoleBox_2"));
        consoleBox_2->setGeometry(QRect(10, 50, 301, 111));
        progressBar_2 = new QProgressBar(groupBox_3);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(10, 10, 301, 23));
        progressBar_2->setValue(0);
        progressBar_2->setTextVisible(false);
        search_Button_2 = new QPushButton(groupBox_3);
        search_Button_2->setObjectName(QString::fromUtf8("search_Button_2"));
        search_Button_2->setGeometry(QRect(320, 10, 91, 24));
        fileName_Label_2 = new QLabel(groupBox_3);
        fileName_Label_2->setObjectName(QString::fromUtf8("fileName_Label_2"));
        fileName_Label_2->setGeometry(QRect(10, 30, 291, 20));
        output_Button_2 = new QPushButton(groupBox_3);
        output_Button_2->setObjectName(QString::fromUtf8("output_Button_2"));
        output_Button_2->setGeometry(QRect(320, 50, 91, 111));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 443, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOptions);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionReadme);
        menuHelp->addSeparator();
        menuHelp->addAction(actionUpdate);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        fileToInclude_comboBox_2->setCurrentIndex(-1);
        fileToExclude_comboBox_2->setCurrentIndex(-1);
        listSearchFile_comboBox_2->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LemeFind", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionOptions->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        actionReadme->setText(QCoreApplication::translate("MainWindow", "Readme", nullptr));
        action->setText(QString());
        actionCheck_for_updates_2->setText(QCoreApplication::translate("MainWindow", "Check for updates", nullptr));
        actionUpdate->setText(QCoreApplication::translate("MainWindow", "Check for updates", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About LemeFind", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Rules", nullptr));
        ignoreCmt_checkBox_2->setText(QCoreApplication::translate("MainWindow", "Ignore comment", nullptr));
        numOfResults_checkBox_2->setText(QCoreApplication::translate("MainWindow", "Number of results", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "and", nullptr));
        caseSensitive_checkBox_2->setText(QCoreApplication::translate("MainWindow", "Case sensitive", nullptr));
        wholeWord_checkBox_2->setText(QCoreApplication::translate("MainWindow", "Whole word", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Filters", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Files to include:", nullptr));
        fileToInclude_comboBox_2->setCurrentText(QString());
        fileToExclude_comboBox_2->setCurrentText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Files to exclude:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "( * = any string; , = seperate)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Input", nullptr));
        listSearchFileBrowse_Button_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Search input:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Search directory:", nullptr));
        listSearchFile_comboBox_2->setCurrentText(QString());
        directoryBrowse_Button_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        groupBox_3->setTitle(QString());
        consoleBox_2->setPlainText(QString());
        search_Button_2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        fileName_Label_2->setText(QString());
        output_Button_2->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
