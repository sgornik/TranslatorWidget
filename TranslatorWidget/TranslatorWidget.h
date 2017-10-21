#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TranslatorWidget.h"

class TranslatorWidget : public QMainWindow
{
    Q_OBJECT

public:
    TranslatorWidget(QWidget *parent = Q_NULLPTR);

private:
    Ui::TranslatorWidgetClass ui;
};
