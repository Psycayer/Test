#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QPushButton button;
    button.setText("Whoop whoop 'n Knöpges!");
    button.setToolTip("Des is n richtig harter Knöpges. Der kann zwar nich viel, aber das kann er gut.");
    button.show();

    QFont font("Arial",20,-1,true);
    button.setFont(font);

    QIcon icon ("/icon/83825-200.png");
    button.setIcon(icon);

    button.setIcon(QIcon::fromTheme("face-smile"));

    return app.exec();
}
