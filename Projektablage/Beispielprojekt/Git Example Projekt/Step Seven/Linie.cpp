#include "Linie.h"
#include <iostream>
#include <cmath>
using namespace std;


// Konstruktoren
Linie::Linie() : mAnfang(Punkt(0.0,0.0)), mEnde(Punkt(0.0,0.0))
{
}

Linie::Linie(Punkt pAnfang, Punkt pEnde) : mAnfang(pAnfang), mEnde(pEnde)
{
}

// Kopierkonstruktor
Linie::Linie(const Linie& rhs) : mAnfang(rhs.Anfang()), mEnde(rhs.Ende())
{
}

// Destruktor
Linie::~Linie()
{
}

// Zuweisungsoperator
Linie& Linie::operator=(const Linie& rhs)
{
    if (this==&rhs)
        return *this;
    else
    {
        mAnfang=rhs.Anfang();
        mEnde=rhs.Ende();
        return *this;
    }
	//return *this;
}

// Zugriffsfunktionen
Punkt Linie::Anfang() const
{
    return mAnfang;
}

Punkt Linie::Ende() const
{
    return mAnfang;
}

double Linie::Laenge() const
{
    double diff_x=abs(mAnfang.x()-mEnde.x());
    double diff_y=abs(mAnfang.y()-mEnde.y());

    return sqrt(diff_x*diff_x+diff_y*diff_y);
}
// virtual
void Linie::Zeichne() const
{
    cout << "Linie" << endl;
    cout << "  Anfangspunkt"<<endl;
    mAnfang.Zeichne();
    cout << "  Endpunkt" << endl;
    mEnde.Zeichne();
}
