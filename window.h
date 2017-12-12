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

signals:

public slots:
};

#endif // WINDOW_H
