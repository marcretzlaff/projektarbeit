#ifndef Abbildung_h                      // Abbildung.h
#define Abbildung_h

#include "Grafik.h"
#include <vector>

using namespace std;

// Abbildung
class Abbildung : public Grafik
{

private:
    vector <Grafik*> grafiken;
public:
    Abbildung();
    ~Abbildung();
    //
    virtual void Zeichne() const;
    //
    void FuegeHinzu(Grafik* g);
    void Entferne(Grafik* g);
    Grafik* GibGrafik(int i);
};
#endif
