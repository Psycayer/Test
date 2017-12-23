#ifndef DESIGNERWIDGET_H
#define DESIGNERWIDGET_H

#include <QWidget>

namespace Ui {
class DesignerWidget;
}

class DesignerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DesignerWidget(QWidget *parent = 0);
    ~DesignerWidget();

private:
    Ui::DesignerWidget *ui;
};

#endif // DESIGNERWIDGET_H
