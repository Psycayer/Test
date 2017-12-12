#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{

    // Set size of the window
    setFixedSize(1000, 500);

    // Create and position the button
    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(10, 10, 80, 30);

    connect(m_button, SIGNAL (clicked()), this, SLOT (close()));
}
