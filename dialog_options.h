#ifndef DIALOG_OPTIONS_H
#define DIALOG_OPTIONS_H

#include <QDialog>
#include <QMessageBox>


namespace Ui {
class Dialog_Options;
}

class Dialog_Options : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Options(QWidget *parent = 0);
    ~Dialog_Options();

private slots:
    void on_Options_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::Dialog_Options *ui_options;
};

#endif // DIALOG_OPTIONS_H
