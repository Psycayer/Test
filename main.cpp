#include <QApplication>
#include "window.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    Window window;
    window.show();

    return app.exec();
}

/*
 QWidget window;
 window.setFixedSize(1000, 500);
 QPushButton *button = new QPushButton("Hello World", &window);
 button->setGeometry(100, 100, 100, 100);
 window.show();                                    Fenster

 QPushButton button1 ("test");
 QPushButton button2 ("other", &button1);
 button1.show();                                   Buttonception

 QPushButton button;
 button.setText("Whoop whoop 'n Knöpges!");
 button.setToolTip("Des is n richtig harter Knöpges. Der kann zwar nich viel, aber das kann er gut.");
 button.show();
 QFont font("Arial",20,-1,true);
 button.setFont(font);                             Knöpges

  QIcon icon ("/icon/83825-200.png");
  button.setIcon(icon);
  button.setIcon(QIcon::fromTheme("face-smile"));  funzt nicht!
*/
