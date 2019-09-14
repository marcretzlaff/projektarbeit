#ifndef Grafik_h                      // Grafik.h
#define Grafik_h

#include "Grafik.h"
#include <vector>

using namespace std;

// Grafik
class Grafik
{
private:
public:
    Grafik();
    ~Grafik();
    //
    virtual void Zeichne() const=0;
    //
    virtual void FuegeHinzu(Grafik* g);
    virtual void Entferne(Grafik* g);
    virtual Grafik* GibGrafik(int i);
};
#endif
