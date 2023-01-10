#include "signupwindow.h"
#include "ui_signupwindow.h"

signupWindow::signupWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::signupWindow) {
    ui->setupUi(this);
    ui->nameLineEdit->setPlaceholderText("Name");
    ui->surnameLineEdit->setPlaceholderText("Surname");
    ui->emailLineEdit->setPlaceholderText("Email");
    ui->passwordLineEdit->setPlaceholderText("Password");
    ui->repeatLineEdit->setPlaceholderText("Repeat your password");

    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
    ui->repeatLineEdit->setEchoMode(QLineEdit::Password);
}

signupWindow::~signupWindow() {
    delete ui;
    ui = nullptr;
}

bool signupWindow::correct_email() {
    const QString email = ui->emailLineEdit->text();
    QRegExp reg("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    if (!reg.exactMatch(email)) {
        ui->emailLineEdit->clear();
        ui->emailLineEdit->setPlaceholderText("Wrong email");
        return false;
    }
    return true;
}

bool signupWindow::correct_name() {
    const QString name = ui->nameLineEdit->text();
    QRegExp reg("[A-Z][a-z]{1,}");
    if (!reg.exactMatch(name)) {
        ui->nameLineEdit->clear();
        ui->nameLineEdit->setPlaceholderText("Wrong name");
        return false;
    }
    return true;
}

bool signupWindow::correct_surname() {
    const QString surname = ui->surnameLineEdit->text();
    QRegExp reg("[A-Z][a-z]{1,}");
    if (!reg.exactMatch(surname)) {
        ui->surnameLineEdit->clear();
        ui->surnameLineEdit->setPlaceholderText("Wrong surname");
        return false;
    }
    return true;
}

bool signupWindow::correct_password() {
    const QString pass = ui->passwordLineEdit->text();
    const QString rep = ui->repeatLineEdit->text();
    QRegExp reg("^(?=.*\d).{8,15}$");
    if (pass.length() != rep.length()) {
        ui->passwordLineEdit->clear();
        ui->repeatLineEdit->clear();
        ui->passwordLineEdit->setPlaceholderText("Wrong password");
        ui->repeatLineEdit->setPlaceholderText("Repeat password");
        return false;
    }
    if (!reg.exactMatch(pass)) {
        ui->passwordLineEdit->clear();
        ui->repeatLineEdit->clear();
        ui->passwordLineEdit->setPlaceholderText("Wrong password");
        ui->repeatLineEdit->setPlaceholderText("Repeat password");
        return false;
    }
    return true;
}

void signupWindow::on_signupbtn_clicked() {
    bool decision = correct_name() && correct_surname() &&
                    correct_password() && correct_email();
    if (decision) {
        mainWindow* window = new mainWindow(this);
        window->setWindowTitle("Task Management System");
        window->showFullScreen();
        this->hide();
    }
}
