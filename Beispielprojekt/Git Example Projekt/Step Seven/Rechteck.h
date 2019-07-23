#ifndef RECHTECK_H
#define RECHTECK_H

#include "Punkt.h"

// Rechteck
class Rechteck : public Grafik
{
    //       mD                     mC
    //        .-----------------------
    //        |                      | b
    //        |                      |
    //        .-----------------------
    //       mA           a         mB

private:
    Punkt mA,mB,mC,mD;
public:
	// Konstruktoren
    Rechteck(Punkt pA, Punkt pB, Punkt pC, Punkt pD);
	// Kopierkonstruktor
    Rechteck(const Rechteck& rhs);
	// Destruktor
    ~Rechteck();
    // Zugriffsfunktionen
    Punkt A() const;
    void setzeA(Punkt p);
    Punkt B() const;
    void setzeB(Punkt p);
    Punkt C() const;
    void setzeC(Punkt p);
    Punkt D() const;
    void setzeD(Punkt p);
    //
    double Flaeche() const;
    double Umfang() const;
    // virtual
    virtual void Zeichne() const;
};

#endif // RECHTECK_H
