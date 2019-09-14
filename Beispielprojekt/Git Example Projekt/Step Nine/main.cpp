#include <iostream>
using namespace std;

#include "Punkt.h"
#include "Linie.h"
#include "Grafik.h"
#include "Abbildung.h"
#include "Rechteck.h"
#include "Kreis.h"
#include "Text.h"


int main()
{
/* Samples */
Punkt a(2.0,2.0);
Punkt b(2.0,4.0);
Punkt c(4.0,2.0);
Punkt d(4.0,4.0);
Kreis sK(a,3.0);
Punkt punkt1(3.0,4.0);
Rechteck quadrat(a,b,c,d);
Linie linie1(a,punkt1);
Text text1("Hello World");


Abbildung Abb;

Abb.FuegeHinzu(&linie1);
Abb.FuegeHinzu(&text1);
Abb.FuegeHinzu(&sK);
Abb.FuegeHinzu(&quadrat);
Abb.FuegeHinzu(&punkt1);
Abb.Zeichne();
return 0;
}
