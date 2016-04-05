#include "dialog_guestlist.h"
#include "ui_dialog_guestlist.h"

Dialog_GuestList::Dialog_GuestList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_GuestList)
{
    ui->setupUi(this);
}

Dialog_GuestList::~Dialog_GuestList()
{
    delete ui;
}
