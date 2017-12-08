#include "auto.h"

Auto::Auto(int tankgroesse, float tankinhalt, float verbrauch)
{
    m_tankgroesse = tankgroesse;
    m_tankinhalt  = tankinhalt;
    m_verbrauch   = verbrauch;
}

void Auto::info()const{

    std::cout << "In den Tank passen " << m_tankgroesse << " Liter Treibstoff.\n";
    std::cout << "Aktuell sind noch " << m_tankinhalt << " Liter im Tank.\n";
    std::cout << "Der Wagen verbraucht " << m_verbrauch << " Liter pro 100 km.\n";
    std::cout << std::endl;
}

void Auto::fahren(int km){

    m_tankinhalt = m_tankinhalt - (m_verbrauch / 100)* km;

}
