#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog_options.h"
#include "dialog_guestlist.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_MainWindow_SaveExitButton_clicked();

    void on_MainWindow_OptionsButton_clicked();
    void set_MainWindow_OptionsButton_unlock();

    void on_MainWindow_StartButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
