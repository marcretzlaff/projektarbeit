#include "Punkt.h"                    // Punkt.cpp
#include <iostream>
using namespace std;

// Konstruktoren
Punkt::Punkt()
{
    x_koordinate=0;
    y_koordinate=0;
}

Punkt::Punkt(double x, double y)
{
    x_koordinate=x;
    y_koordinate=y;
}

// Kopierkonstruktor
Punkt::Punkt(const Punkt& rhs)
{
    x_koordinate=rhs.x();
    y_koordinate=rhs.y();
}

// Zuweisungsoperator
Punkt& Punkt::operator=(const Punkt& rhs)
{
    if (this==&rhs)
	{
        return *this;
	}
    else
    { 
        x_koordinate=rhs.x();
        y_koordinate=rhs.y();
        return *this;
    }
	//return *this;
}

// Destruktor
Punkt::~Punkt()
{
}

// Zugriffsfunktionen
double Punkt::x() const
{
    return x_koordinate;
}

double Punkt::y() const
{
    return y_koordinate;
}

//
void Punkt::Zeichne() const
{
    cout << "Punkt:" << endl;
    cout << "  (" << x() << "," << y() << ")" << endl;
}
