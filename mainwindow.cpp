#include "mainwindow.h"
#include "ui_mainwindow.h"


double FirstNumber;
bool UserIsTypingSecondNumber = false;


//Konstruktor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->PBNum0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->PBNum1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->PBNum2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->PBNum3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->PBNum4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->PBNum5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->PBNum6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->PBNum7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->PBNum8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->PBNum9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->PBPlusMinus,SIGNAL(released()),this,SLOT(UnaryOperationPressed()));
    connect(ui->PBPercent,SIGNAL(released()),this,SLOT(UnaryOperationPressed()));

    connect(ui->PBPlus,SIGNAL(released()),this,SLOT(BinaryOperationPressed()));
    connect(ui->PBMinus,SIGNAL(released()),this,SLOT(BinaryOperationPressed()));
    connect(ui->PBMultip,SIGNAL(released()),this,SLOT(BinaryOperationPressed()));
    connect(ui->PBDivide,SIGNAL(released()),this,SLOT(BinaryOperationPressed()));

    ui->PBPlus->setCheckable(true);
    ui->PBMinus->setCheckable(true);
    ui->PBMultip->setCheckable(true);
    ui->PBDivide->setCheckable(true);
}


//Destruktor
MainWindow::~MainWindow()
{
    delete ui;
}


//Nummernfeldfunktion
void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton*)sender();

    QString LabelNumber;
    QString newLabel;

    if ((ui->PBPlus->isChecked() || ui->PBMinus->isChecked() || ui->PBMultip->isChecked() || ui->PBDivide->isChecked()) && (!UserIsTypingSecondNumber))
    {
        LabelNumber = button->text();
        UserIsTypingSecondNumber = true;
    }
    else
    {
        LabelNumber = (ui->LBSum->text() + button->text());
    }

    newLabel = LabelNumber;

    if (!LabelNumber.contains("."))
    {
        if( newLabel.at( 0 ) == '0')
        {
            newLabel.remove(0,1);
        }
    }

    // this loop is only needed for character issues under Linux and remove not needed characters "&"!
    int i = 0;
    do{
        if (newLabel.at( i ) == '&'){
           newLabel.remove(i,1);
        }
        i++;
    }while(i < newLabel.length());

    ui->LBSum->setText(newLabel);
}


//Funktion für Minusvorzeichen und Prozent
void MainWindow::UnaryOperationPressed()
{
    QPushButton * button = (QPushButton*)sender();

    double LabelNumber;
    QString newLabel;

    if (button->text() == "+/-")
    {
       LabelNumber = ui->LBSum->text().toDouble();
       LabelNumber = LabelNumber * -1;
       newLabel = QString::number(LabelNumber,'g',15);

       ui->LBSum->setText(newLabel);
    }

    else
    {
       LabelNumber = ui->LBSum->text().toDouble();
       LabelNumber = LabelNumber * 0.01;
       newLabel = QString::number(LabelNumber,'g',15);

       ui->LBSum->setText(newLabel);
    }
}


//Funktion zum eingeben von Plus, Minus, Mal und Geteilt
void MainWindow::BinaryOperationPressed()
{
    QPushButton * button = (QPushButton*)sender();

    FirstNumber = ui->LBSum->text().toDouble();

    button->setChecked(true);
}


//Funktion für Komma
void MainWindow::on_PBPoint_released()
{
    QString LabelNumber;

    LabelNumber = ui->LBSum->text();
    if (!LabelNumber.contains("."))
    {
        ui->LBSum->setText(ui->LBSum->text()+".");
    }
}


//Funktion zum Loeschen
void MainWindow::on_PBClear_released()
{
    ui->LBSum->setText("0");
}


//Funktion um Auszurechnen
void MainWindow::on_PBEqual_released()
{
    double LabelNumber, SecondNumber;
    QString newLabel;

    SecondNumber = ui->LBSum->text().toDouble();

    if (ui->PBPlus->isChecked())
    {
        LabelNumber = FirstNumber + SecondNumber;
        newLabel = QString::number(LabelNumber,'g',15);
        ui->LBSum->setText(newLabel);
        ui->PBPlus->setChecked(false);
    }
    else if (ui->PBMinus->isChecked())
    {
        LabelNumber = FirstNumber - SecondNumber;
        newLabel = QString::number(LabelNumber,'g',15);
        ui->LBSum->setText(newLabel);
        ui->PBMinus->setChecked(false);
    }
    else if (ui->PBMultip->isChecked())
    {
        LabelNumber = FirstNumber * SecondNumber;
        newLabel = QString::number(LabelNumber,'g',15);
        ui->LBSum->setText(newLabel);
        ui->PBMultip->setChecked(false);
    }
    else if (ui->PBDivide->isChecked())
    {
        LabelNumber = FirstNumber / SecondNumber;
        newLabel = QString::number(LabelNumber,'g',15);
        ui->LBSum->setText(newLabel);
        ui->PBDivide->setChecked(false);
    }

    UserIsTypingSecondNumber=false;
}
