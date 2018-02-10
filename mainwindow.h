#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QString>
#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digit_pressed();
    void UnaryOperationPressed();
    void BinaryOperationPressed();
    void on_PBPoint_released();
    void on_PBClear_released();
    void on_PBEqual_released();
};

#endif // MAINWINDOW_H
