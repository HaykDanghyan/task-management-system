#include "tms.h"
#include "ui_tms.h"

TMS::TMS(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::TMS) {
    ui->setupUi(this);
    QPixmap pix("../project-manager-roll.webp");
    auto w = ui->picture->width();
    auto h = ui->picture->height();
    ui->picture->setPixmap(pix.scaled(w, h));
}

TMS::~TMS() {
    delete ui;
    ui = nullptr;
}


void TMS::on_login_clicked() {
    loginWindow* window = new loginWindow(this);
    window->setFixedSize(window->size());
    window->setWindowTitle("Log In");
    this->hide();
    window->show();
}

void TMS::on_signup_clicked() {
    signupWindow* window = new signupWindow(this);
    window->setFixedSize(window->size());
    window->setWindowTitle("Sign Up");
    this->hide();
    window->show();
}
