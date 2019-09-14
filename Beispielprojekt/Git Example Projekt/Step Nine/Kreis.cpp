// Kreis.cpp
#include "Kreis.h"
#include <iostream>

using namespace std;

// Kreis
Kreis::Kreis(Punkt m, double r)
{
mMittelpunkt=m;
mRadius=r;
}

// Kopierkonstruktor
Kreis::Kreis(const Kreis& rhs)
{
mMittelpunkt=rhs.Mittelpunkt();
}

void Kreis::setzeRadius(double r)
{
mRadius=r;
}

double Kreis::Radius() const
{
return mRadius;
}

void Kreis::setzeMittelpunkt(Punkt m)
{
mMittelpunkt=m;
}

Punkt Kreis::Mittelpunkt() const
{
return mMittelpunkt;
}

Kreis::~Kreis()
{
}

double Kreis::Flaeche() const
{
return mRadius*mRadius*PI;
}

double Kreis::Umfang() const
{
return 2*PI*mRadius;
}

void Kreis::Zeichne() const
{
    cout << "Kreis" << endl;
    cout << "  Anfangspunkt" << endl;
    mMittelpunkt.Zeichne();
    cout << "  Radius" << mRadius << endl;
}
