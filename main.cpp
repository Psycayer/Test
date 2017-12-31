
#include <iostream>

int foo = 200;

void
huggabugga(int* zahl)
{
  int Wert = 20;
  std::cout << "Was steht in zahl = " << zahl << std::endl;
  std::cout << "Was steht in *zahl = " << *zahl << std::endl;
  std::cout << "Was steht in &zahl = " << &zahl << std::endl;
  // int ergb = zahl + Wert;
  foo = 100;
}

main(int argc, char** argv)
{
  int Wert = 5;
  int* pWertAdresse = &Wert;
  // int Adresse = &Wert;
  // int* pWert = Wert;

  // std::cout << "Die inhalt aus Adresse ist = " << pWert << std::endl; // 5

  std::cout << "Der Variablen Inhalt ist = " << Wert << std::endl; // 5
  // std::cout << "Der Speicheradresse = " << Adresse << std::endl;   // 546846
  std::cout << "Die Speicheradresse ist = " << pWertAdresse
            << std::endl;                              // 123486382
  std::cout << "??? = " << *pWertAdresse << std::endl; // 123486382

  huggabugga(&Wert);
}
