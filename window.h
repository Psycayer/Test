#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QApplication>
#include <QRadioButton>
#include <QBoxLayout>

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
 QRadioButton *m_radiobutton1;
 QRadioButton *m_radiobutton2;
 QRadioButton *m_radiobutton3;
 QRadioButton *m_radiobutton4;
 QRadioButton *m_radiobutton5;
 QBoxLayout *m_boxlayout;
 QPushButton *m_button;
};

#endif // WINDOW_H
