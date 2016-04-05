#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_MainWindow_SaveExitButton_clicked()
{
    //Call Save Function

    //Exit
    this->destroy();
}

void MainWindow::on_MainWindow_OptionsButton_clicked()
{
    //Call Options Menu
}

void MainWindow::on_MainWindow_StartButton_clicked()
{
    //Goto Login
}
