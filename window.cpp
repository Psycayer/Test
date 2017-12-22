#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{

    setFixedSize(400, 100);

    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(10, 10, 80, 30);
    m_button->setCheckable(true);

    m_counter = 0;

    connect(m_button, SIGNAL (clicked(bool)), this, SLOT (slotButtonClicked(bool)));
     connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT (quit()));



    m_radiobutton1 = new QRadioButton("Das ist", this );
    m_radiobutton2 = new QRadioButton("ein Radiobutton", this );
    m_radiobutton3 = new QRadioButton("nach dem", this );
    m_radiobutton4 = new QRadioButton("anderen.", this );
    m_radiobutton5 = new QRadioButton("läuft...", this );


    m_boxlayout = new QHBoxLayout;
    m_boxlayout->addWidget(m_radiobutton1);
    m_boxlayout->addWidget(m_radiobutton2);
    m_boxlayout->addWidget(m_radiobutton3);
    m_boxlayout->addWidget(m_radiobutton4);
    m_boxlayout->addWidget(m_radiobutton5);

   this->setLayout(m_boxlayout);
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
