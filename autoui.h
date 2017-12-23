#ifndef AUTOUI_H
#define AUTOUI_H

#include <QWidget>

namespace Ui {
class AutoUI;
}

class AutoUI : public QWidget
{
    Q_OBJECT

public:
    explicit AutoUI(QWidget *parent = 0);
    ~AutoUI();

private:
    Ui::AutoUI *ui;
};

#endif // AUTOUI_H
