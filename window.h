#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QApplication>
#include <QRadioButton>

class Window : public QWidget
{
 Q_OBJECT

public:
 explicit Window(QWidget *parent = nullptr);

signals:
 void counterReached();

private slots:
 void slotButtonClicked(bool checked);

private:
 int m_counter;
 QRadioButton *m_radiobutton;
 QPushButton *m_button;
};

#endif // WINDOW_H
