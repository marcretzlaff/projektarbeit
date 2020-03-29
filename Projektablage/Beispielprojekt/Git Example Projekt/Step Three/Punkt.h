#ifndef Punkt_h                        // Punkt.h
#define Punkt_h

// Punkt
class Punkt
{
    /*
     y
      ^
      |                 . (x,y)
      ------------------------------>x
     */

private:
    double x_koordinate;
    double y_koordinate;
public:
    // Konstruktoren
    Punkt();
    Punkt(double x_koordinate,double y_koordinate);
	// Kopierkonstruktor
    Punkt(const Punkt&);
	// Zuweisungsoperator
    Punkt& operator=(const Punkt& rhs);
    // Destruktor
    ~Punkt();
    // Zugriffsfunktionen
    double x() const;
    double y() const;
    //
    void Zeichne() const;
};
#endif
