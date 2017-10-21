#include "TranslatorWidget.h"
#include <QtWidgets/QApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    qDebug() << "Starting the application";
    QApplication a(argc, argv);
    TranslatorWidget w;
    w.show();
    return a.exec();
}
