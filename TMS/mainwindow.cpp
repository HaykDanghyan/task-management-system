#include "mainwindow.h"
#include "ui_mainwindow.h"

mainWindow::mainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::mainWindow) {
    ui->setupUi(this);
}

mainWindow::~mainWindow() {
    delete ui;
    ui = nullptr;
}

void mainWindow::on_logout_clicked() {
    logout* dialog = new logout(this);
    dialog->show();
    dialog->setWindowTitle("Log Out");
    dialog->setModal(true);
    if (dialog->exec() == QDialog::Accepted) {
        TMS* window = new TMS;
        this->hide();
        dialog->hide();
        window->setFixedSize(window->size());
        window->setWindowTitle("Task Management System");
        window->show();
    } else {
        dialog->hide();
    }
}

void mainWindow::on_help_clicked() {
    helpWindow* window = new helpWindow(this);
    window->show();
    window->setFixedSize(window->size());
    window->setWindowTitle("Task Management System Help Guide");
}

void mainWindow::on_createTask_clicked() {
    ui->createTask->hide();
}
