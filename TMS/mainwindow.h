#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "logout.h"
#include "tms.h"
#include "helpwindow.h"

namespace Ui {
class mainWindow;
}

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

private slots:
    void on_logout_clicked();
    void on_help_clicked();

    void on_createTask_clicked();

private:
    Ui::mainWindow *ui;
};

#endif // MAINWINDOW_H
