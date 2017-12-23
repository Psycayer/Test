#include "designerwidget.h"
#include "ui_designerwidget.h"

DesignerWidget::DesignerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DesignerWidget)
{
    ui->setupUi(this);
}

DesignerWidget::~DesignerWidget()
{
    delete ui;
}
