
class Auto{
public:
    Auto(int tankgroesse, float tankinhalt, float verbrauch);
    void info()const;
    void fahren(int km);
    void tanken(float liter);

private:
    int   m_tankgroesse;
    float m_tankinhalt;
    float m_verbrauch;
};

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
