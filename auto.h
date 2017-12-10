#ifndef AUTO_H
#define AUTO_H

#include <iostream>

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
    bool m_overflow;
};
#endif // AUTO_H
