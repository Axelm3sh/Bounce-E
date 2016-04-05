#ifndef DIALOG_OPTIONS_H
#define DIALOG_OPTIONS_H

#include <QDialog>

namespace Ui {
class Dialog_Options;
}

class Dialog_Options : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Options(QWidget *parent = 0);
    ~Dialog_Options();

private:
    Ui::Dialog_Options *ui;
};

#endif // DIALOG_OPTIONS_H
