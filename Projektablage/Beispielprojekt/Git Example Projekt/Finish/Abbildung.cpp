// Abbildung.cpp
#include "Abbildung.h"
#include "Grafik.h"
#include <vector>
#include <iostream>

using namespace std;

Abbildung::Abbildung()
{
}

Abbildung::~Abbildung()
{
    grafiken.clear();
}

void Abbildung::Zeichne() const
{
    for(unsigned i=0;i < grafiken.size(); i++)
    {
        cout << "Abbildung:" << endl;
        grafiken[i]->Zeichne();
    }
}

void Abbildung::FuegeHinzu(Grafik* g)
{
    grafiken.push_back(g);
}

void Abbildung::Entferne(Grafik* g)
{
    for(unsigned i=0;i < grafiken.size();i++)
    {
        Grafik* mGrafik=grafiken[i];
        if (mGrafik == g)
            grafiken.erase(grafiken.begin()+i);
    }
}

Grafik* Abbildung::GibGrafik(int i)
{
    return grafiken[i];
}
