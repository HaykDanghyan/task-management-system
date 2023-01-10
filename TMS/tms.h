#ifndef TMS_H
#define TMS_H

#include <QMainWindow>

#include "loginwindow.h"
#include "signupwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TMS; }
QT_END_NAMESPACE

class TMS : public QMainWindow
{
    Q_OBJECT

public:
    TMS(QWidget *parent = nullptr);
    ~TMS();

private slots:
    void on_login_clicked();

    void on_signup_clicked();

private:
    Ui::TMS *ui;
};
#endif // TMS_H
