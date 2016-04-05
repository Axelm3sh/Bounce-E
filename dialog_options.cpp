#include "dialog_options.h"
#include "ui_dialog_options.h"

Dialog_Options::Dialog_Options(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Options)
{
    ui->setupUi(this);
}

Dialog_Options::~Dialog_Options()
{
    delete ui;
}
