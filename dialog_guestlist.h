#ifndef DIALOG_GUESTLIST_H
#define DIALOG_GUESTLIST_H

#include <QDialog>

namespace Ui {
class Dialog_GuestList;
}

class Dialog_GuestList : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_GuestList(QWidget *parent = 0);
    ~Dialog_GuestList();

private:
    Ui::Dialog_GuestList *ui;
};

#endif // DIALOG_GUESTLIST_H
