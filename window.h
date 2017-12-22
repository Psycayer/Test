#ifndef WINDOW_H
#define WINDOW_H

#include <QObject>
#include <QWidget>
#include <QPushButton>

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = 0);
private:
    QPushButton *m_button;
    int m_counter;
signals:
    void counterReached();
public slots:

private slots:
    void slotButtonClicked(bool checked);
};

#endif // WINDOW_H
