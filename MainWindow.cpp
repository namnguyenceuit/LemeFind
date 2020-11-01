#include "MainWindow.h"
#include "AboutDialog.h"
#include "UpdateDialog.h"
#include <qdesktopservices.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui = new Ui::MainWindow();
    ui->setupUi(this);
    ui->outputButton->setIcon(QIcon("./resources/icons/folder_ic.png"));
    eventConnect();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::eventConnect()
{
    //Connect actions
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(openAbout()));
    connect(ui->actionUpdate, SIGNAL(triggered()), this, SLOT(openUpdate()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(exitApp()));
    connect(ui->actionReadme, SIGNAL(triggered()), this, SLOT(openReadme()));

    //Connect buttons
    connect(ui->outputButton, SIGNAL(clicked()), this, SLOT(openOutputFolder()));
}

void MainWindow::openAbout()
{
    AboutDialog* aboutDialog = new AboutDialog();
    aboutDialog->setWindowIcon(QIcon("./resources/icons/main_ic.png"));
    aboutDialog->show();
}

void MainWindow::openUpdate()
{
    UpdateDialog* updateDialog = new UpdateDialog();
    updateDialog->setWindowIcon(QIcon("./resources/icons/main_ic.png"));
    updateDialog->show();
}

void MainWindow::openReadme()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("./README.md"));
}

void MainWindow::openOutputFolder()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("./output"));
}

void MainWindow::exitApp()
{
    QApplication::exit();
}