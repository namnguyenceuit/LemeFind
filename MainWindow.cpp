#include "MainWindow.h"
#include "AboutDialog.h"
#include "UpdateDialog.h"

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
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(openAbout()));
    connect(ui->actionUpdate, SIGNAL(triggered()), this, SLOT(openUpdate()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(exitApp()));
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

void MainWindow::exitApp()
{
    QApplication::exit();
}