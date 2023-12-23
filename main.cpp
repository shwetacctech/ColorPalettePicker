#include "stdafx.h"
#include "QubeMeshing.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QubeMeshing w;
    w.show();
    return a.exec();
}
