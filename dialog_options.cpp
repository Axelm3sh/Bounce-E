#include "dialog_options.h"
#include "ui_dialog_options.h"
#include <QDebug>


Dialog_Options::Dialog_Options(QWidget *parent) :
    QDialog(parent),
    ui_options(new Ui::Dialog_Options)
{
    ui_options->setupUi(this);
}

Dialog_Options::~Dialog_Options()
{
    delete ui_options;
}

void Dialog_Options::on_Options_buttonBox_clicked(QAbstractButton *button)
{

    qDebug() << button->text();


    if(button->text().toLower().contains("ok"))
    {
        //TODO: Implement check to prevent data change loss
        //TODO: Implement actually saving options
        qDebug() << "We hit ok " << button->text().toLower().contains("ok");
        accept(); //Close this window and return Accept code
    }
    else if(button->text().toLower().contains("cancel"))
    {
        QMessageBox::StandardButton okWarn;
        okWarn = QMessageBox::question(this,
                                       "Confirm",
                                       "Do you want to get rid of changes?",
                                       QMessageBox::Yes|QMessageBox::No);

        if(okWarn == QMessageBox::Yes)
        {
            accept();//Close this window and return Accept code
        }
        //else do nothing, stay on this page
    }
}
