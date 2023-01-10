#include "loginwindow.h"
#include "ui_loginwindow.h"

loginWindow::loginWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::loginWindow) {
    ui->setupUi(this);
    ui->emailLineEdit->setPlaceholderText("Email");
    ui->passwordLineEdit->setPlaceholderText("Password");

}

loginWindow::~loginWindow() {
    delete ui;
    ui = nullptr;
}
