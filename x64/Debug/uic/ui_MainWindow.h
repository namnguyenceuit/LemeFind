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
    QCheckBox *ignoreCmtCheckBox;
    QComboBox *operatorComboBox;
    QLineEdit *number1TextBox;
    QCheckBox *numOfResultsCheckBox;
    QLabel *label_7;
    QLineEdit *number2TextBox;
    QCheckBox *caseSensitiveCheckBox;
    QCheckBox *wholeWordCheckBox;
    QGroupBox *groupBox_4;
    QLabel *label_8;
    QComboBox *fileToIncludeComboBox;
    QComboBox *fileToExcludeComboBox;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox;
    QPushButton *searchInputBrowse;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *searchInput;
    QComboBox *searchDirectory;
    QPushButton *searchDirectoryBrowse;
    QGroupBox *groupBox_3;
    QPlainTextEdit *consoleBox;
    QProgressBar *progressBar;
    QPushButton *searchButton;
    QLabel *fileNameLabel;
    QPushButton *outputButton;
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
        ignoreCmtCheckBox = new QCheckBox(groupBox_2);
        ignoreCmtCheckBox->setObjectName(QString::fromUtf8("ignoreCmtCheckBox"));
        ignoreCmtCheckBox->setGeometry(QRect(10, 20, 101, 17));
        operatorComboBox = new QComboBox(groupBox_2);
        operatorComboBox->setObjectName(QString::fromUtf8("operatorComboBox"));
        operatorComboBox->setGeometry(QRect(120, 50, 141, 22));
        number1TextBox = new QLineEdit(groupBox_2);
        number1TextBox->setObjectName(QString::fromUtf8("number1TextBox"));
        number1TextBox->setGeometry(QRect(270, 50, 51, 21));
        numOfResultsCheckBox = new QCheckBox(groupBox_2);
        numOfResultsCheckBox->setObjectName(QString::fromUtf8("numOfResultsCheckBox"));
        numOfResultsCheckBox->setGeometry(QRect(10, 53, 111, 17));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(332, 52, 21, 16));
        number2TextBox = new QLineEdit(groupBox_2);
        number2TextBox->setObjectName(QString::fromUtf8("number2TextBox"));
        number2TextBox->setGeometry(QRect(360, 50, 51, 21));
        caseSensitiveCheckBox = new QCheckBox(groupBox_2);
        caseSensitiveCheckBox->setObjectName(QString::fromUtf8("caseSensitiveCheckBox"));
        caseSensitiveCheckBox->setGeometry(QRect(120, 20, 101, 17));
        wholeWordCheckBox = new QCheckBox(groupBox_2);
        wholeWordCheckBox->setObjectName(QString::fromUtf8("wholeWordCheckBox"));
        wholeWordCheckBox->setGeometry(QRect(220, 20, 101, 17));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 120, 421, 101));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 81, 21));
        fileToIncludeComboBox = new QComboBox(groupBox_4);
        fileToIncludeComboBox->setObjectName(QString::fromUtf8("fileToIncludeComboBox"));
        fileToIncludeComboBox->setGeometry(QRect(100, 20, 311, 22));
        fileToIncludeComboBox->setEditable(true);
        fileToExcludeComboBox = new QComboBox(groupBox_4);
        fileToExcludeComboBox->setObjectName(QString::fromUtf8("fileToExcludeComboBox"));
        fileToExcludeComboBox->setGeometry(QRect(100, 50, 311, 22));
        fileToExcludeComboBox->setEditable(true);
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 50, 81, 21));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 70, 301, 21));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 421, 101));
        searchInputBrowse = new QPushButton(groupBox);
        searchInputBrowse->setObjectName(QString::fromUtf8("searchInputBrowse"));
        searchInputBrowse->setGeometry(QRect(390, 20, 20, 22));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 71, 21));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 60, 91, 21));
        searchInput = new QComboBox(groupBox);
        searchInput->setObjectName(QString::fromUtf8("searchInput"));
        searchInput->setGeometry(QRect(100, 20, 281, 22));
        searchInput->setEditable(true);
        searchDirectory = new QComboBox(groupBox);
        searchDirectory->setObjectName(QString::fromUtf8("searchDirectory"));
        searchDirectory->setGeometry(QRect(100, 60, 281, 22));
        searchDirectory->setEditable(true);
        searchDirectoryBrowse = new QPushButton(groupBox);
        searchDirectoryBrowse->setObjectName(QString::fromUtf8("searchDirectoryBrowse"));
        searchDirectoryBrowse->setGeometry(QRect(390, 60, 20, 22));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 320, 421, 171));
        consoleBox = new QPlainTextEdit(groupBox_3);
        consoleBox->setObjectName(QString::fromUtf8("consoleBox"));
        consoleBox->setGeometry(QRect(10, 50, 301, 111));
        progressBar = new QProgressBar(groupBox_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 10, 301, 23));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        searchButton = new QPushButton(groupBox_3);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(320, 10, 91, 24));
        fileNameLabel = new QLabel(groupBox_3);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        fileNameLabel->setGeometry(QRect(10, 30, 291, 20));
        outputButton = new QPushButton(groupBox_3);
        outputButton->setObjectName(QString::fromUtf8("outputButton"));
        outputButton->setGeometry(QRect(320, 50, 91, 111));
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

        fileToIncludeComboBox->setCurrentIndex(-1);
        fileToExcludeComboBox->setCurrentIndex(-1);
        searchInput->setCurrentIndex(-1);


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
        ignoreCmtCheckBox->setText(QCoreApplication::translate("MainWindow", "Ignore comment", nullptr));
        numOfResultsCheckBox->setText(QCoreApplication::translate("MainWindow", "Number of results", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "and", nullptr));
        caseSensitiveCheckBox->setText(QCoreApplication::translate("MainWindow", "Case sensitive", nullptr));
        wholeWordCheckBox->setText(QCoreApplication::translate("MainWindow", "Whole word", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Filters", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Files to include:", nullptr));
        fileToIncludeComboBox->setCurrentText(QString());
        fileToExcludeComboBox->setCurrentText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Files to exclude:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "( * = any string; , = seperate)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Input", nullptr));
        searchInputBrowse->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Search input:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Search directory:", nullptr));
        searchInput->setCurrentText(QString());
        searchDirectoryBrowse->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        groupBox_3->setTitle(QString());
        consoleBox->setPlainText(QString());
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        fileNameLabel->setText(QString());
        outputButton->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
