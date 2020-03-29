#ifndef LINIE_H
#define LINIE_H

#include "Punkt.h"
#include "Grafik.h"

class Linie : public Grafik
{
    /*
     y
      ^
      |   P1 ._____________.  P2
      ------------------------------>x
     */

private:
    Punkt mAnfang;
    Punkt mEnde;
public:
    // Konstruktoren
    Linie();
    Linie(Punkt pAnfang, Punkt pEnde);
	// Kopierkonstruktor
    Linie(const Linie&);
	// Zuweisungsoperator
    Linie& operator=(const Linie& rhs);
    // Destruktor
    ~Linie();
    // Zugriffsfunktionen
    Punkt Anfang() const;
    Punkt Ende() const;
    double Laenge() const;
    // virtual
    virtual void Zeichne() const;
};

#endif // LINIE_H
