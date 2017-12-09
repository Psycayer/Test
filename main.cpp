#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QString>
#include <auto.h>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 //QFont(const QString & family, int pointSize = –1, int weight = -1, bool italic = false);


 QFont font ("Courier");

 QPushButton button;
 button.setText("My text");
 button.setToolTip("A tooltip");
 button.setFont(font);
 button.show();



 return app.exec();
}
