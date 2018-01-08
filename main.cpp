
#include <iostream>

int foo = 200;

void
huggabugga(int* zahl)
{
  std::cout
    << "zahl gibt die Speicheradresse zurück auf die der Pointer zeigt = "
    << zahl << std::endl;
  std::cout << "*zahl Gibt den Wert aus auf den der Pointer zeigt =" << *zahl
            << std::endl;
  std::cout << "Was steht in &zahl = " << &zahl << std::endl;
  // int ergb = zahl + Wert;
  foo = 100;
}

main(int argc, char** argv)
{
  int Wert = 5;
  std::cout << "Speicheradresse von Wert = " << &Wert << std::endl;
  huggabugga(&Wert);
}
