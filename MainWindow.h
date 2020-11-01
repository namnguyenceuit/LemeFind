#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);
    ~MainWindow();
    void eventConnect();


private slots:
    void openAbout();
    void openUpdate();
    void openReadme();
    void exitApp();
    void openOutputFolder();

private:
    Ui::MainWindow *ui;
};
