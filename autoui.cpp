#include "autoui.h"
#include "ui_autoui.h"

AutoUI::AutoUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AutoUI)
{
    ui->setupUi(this);
}

AutoUI::~AutoUI()
{
    delete ui;
}
