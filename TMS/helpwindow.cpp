#include "helpwindow.h"
#include "ui_helpwindow.h"

helpWindow::helpWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::helpWindow) {
    ui->setupUi(this);
    QPixmap pix("../project-manager.png");
    auto w = ui->picture->width();
    auto h = ui->picture->height();
    ui->picture->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

helpWindow::~helpWindow() {
    delete ui;
}
