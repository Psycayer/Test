#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QPushButton button;
 button.setText("Whoop whoop 'n Knöpges!");
 button.setToolTip("Des is n richtig harter Knöpges. Der kann zwar nich viel, aber das kann er gut.");
 button.show();

 return app.exec();
}
