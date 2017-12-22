#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{

    setFixedSize(200, 100);

    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(10, 10, 80, 30);
    m_button->setCheckable(true);

    m_counter = 0;

    connect(m_button, SIGNAL (clicked(bool)), this, SLOT (slotButtonClicked(bool)));
     connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT (quit()));

    m_radiobutton = new QRadioButton("'n ganz korrekter Radiobutton", this );
    m_radiobutton->setGeometry(10, 50, 200, 30);
}


void Window::slotButtonClicked(bool checked)
{
 if (checked) {
 m_button->setText("Checked");
 } else {
 m_button->setText("Hello World");
 }

 m_counter ++;
  if (m_counter == 10) {
  emit counterReached();
  }
}
