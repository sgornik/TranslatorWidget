#include "TranslatorWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TranslatorWidget w;
    w.show();
    return a.exec();
}
