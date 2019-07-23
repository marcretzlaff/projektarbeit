#include "Punkt.h"
#include "Linie.h"
#include "Rechteck.h"

#include <iostream>
using namespace std;

// Konstruktoren
Rechteck::Rechteck(Punkt pA, Punkt pB, Punkt pC, Punkt pD) :
    mA(pA), mB(pB), mC(pC), mD(pD)
{
}

// Kopierkonstruktor
Rechteck::Rechteck(const Rechteck& rhs) :
    mA(rhs.A()), mB(rhs.B()), mC(rhs.C()), mD(rhs.D())
{
}

// Destruktor
Rechteck::~Rechteck()
{
}

// Zugriffsfunktionen
Punkt Rechteck::A() const
{
    return mA;
}

void Rechteck::setzeA(Punkt p)
{
    mA=p;
}

Punkt Rechteck::B() const
{
    return mB;
}

void Rechteck::setzeB(Punkt p)
{
    mB=p;
}

Punkt Rechteck::C() const
{
    return mC;
}

void Rechteck::setzeC(Punkt p)
{
    mC=p;
}

Punkt Rechteck::D() const
{
    return mD;
}

void Rechteck::setzeD(Punkt p)
{
    mD=p;
}

//
double Rechteck::Flaeche() const
{
    Linie a(mA,mB);
    Linie b(mA,mC);
    return a.Laenge()*b.Laenge();
}

double Rechteck::Umfang() const
{
    Linie a(mA,mB);
    Linie b(mA,mC);
    return 2*(a.Laenge()+b.Laenge());
}

// virtual
void Rechteck::Zeichne() const
{
    cout << "Rechteck" << endl;
    cout << "  A" << endl;
    mA.Zeichne();
    cout << "  B" << endl;
    mB.Zeichne();
    cout << "  C" << endl;
    mC.Zeichne();
    cout << "  D" << endl;
    mD.Zeichne();
}
