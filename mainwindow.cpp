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
    QApplication::instance()->exit(); //FINAL CALL TILL EXIT
}

void MainWindow::on_MainWindow_OptionsButton_clicked()
{
    //Call Options Menu
    Dialog_Options *OptionsWindow = new Dialog_Options(this);
    OptionsWindow->show();
    connect(OptionsWindow, SIGNAL(finished(int)),this, SLOT(set_MainWindow_OptionsButton_unlock()));
    ui->MainWindow_OptionsButton->setDisabled(true);
    //TODO: Implement Options Loading/Saving for persistence
}

void MainWindow::set_MainWindow_OptionsButton_unlock()
{
    ui->MainWindow_OptionsButton->setDisabled(false);
}


void MainWindow::on_MainWindow_StartButton_clicked()
{
    //Goto Login
    Dialog_GuestList *GuestListWindow = new Dialog_GuestList(this);
    GuestListWindow->show();

    //Todo Call update from database
}
