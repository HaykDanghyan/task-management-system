#include "tms.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TMS tms;
    tms.setFixedSize(tms.size());
    tms.setWindowTitle("Task Management System");
    tms.show();

    return a.exec();
}
