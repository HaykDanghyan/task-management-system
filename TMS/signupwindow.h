#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QMainWindow>
#include <QRegExp>
#include <fstream>
#include <iostream>
#include "mainwindow.h"

namespace Ui {
class signupWindow;
}

class signupWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit signupWindow(QWidget *parent = nullptr);
    ~signupWindow();

private slots:
    void on_signupbtn_clicked();

private:
    bool correct_name();
    bool correct_surname();
    bool correct_email();
    bool correct_password();

private:
    Ui::signupWindow *ui;
};

#endif // SIGNUPWINDOW_H
