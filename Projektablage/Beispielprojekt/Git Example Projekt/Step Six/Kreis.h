// Kreis.h
#ifndef Kreis_h
#define Kreis_h

const double PI=3.14159265;

#include "Punkt.h"
#include "Grafik.h"

// Kreis
class Kreis : public Grafik
{
    /*		     ---				        */
    /*		   / r   \		r = radius  	*/
    /*		  |   . m |				        */
    /*		   \     /				        */
    /*	             ---				    */

private:
    Punkt mMittelpunkt;
    double mRadius;
public:
    Kreis(Punkt m, double r);
    Kreis(const Kreis& rhs);
    ~Kreis();
    //
    void setzeRadius(double r);
    double Radius() const;
    void setzeMittelpunkt(Punkt m);
    Punkt Mittelpunkt() const;
    //
    double Flaeche() const;
    double Umfang() const;
    //
    virtual void Zeichne() const;
};

#endif
