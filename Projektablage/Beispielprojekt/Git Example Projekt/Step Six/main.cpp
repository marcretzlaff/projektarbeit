#include <iostream>
using namespace std;

#include "Punkt.h"
#include "Linie.h"
#include "Rechteck.h"
#include "Kreis.h"


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
cout << "Hello World" << endl;

return 0;
}