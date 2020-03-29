#include <iostream>
using namespace std;

#include "Punkt.h"
#include "Linie.h"
#include "Grafik.h"
#include "Abbildung.h"
#include "Rechteck.h"
#include "Kreis.h"
#include "Text.h"

void Tonerverbrauch(double dstrecke)
{
cout << "Tonerverbrauch:"
     << dstrecke /* in  cm  */
        * 10     /* g / m^2 */
        * 0.0001 /* wg. m^2 */
     << endl;
}

int main()
{
/* Kreis */
Punkt m(2.0,2.0);
Kreis sK(m,3.0);
Punkt punkt1(3.0,4.0);
Linie linie1(m,punkt1);


cout << endl;
//
Abbildung Abb;

Abb.FuegeHinzu(&linie1);
Text Text1("Hello");
Text Text2("World");
Abb.FuegeHinzu(&Text1);
Abb.FuegeHinzu(&Text2);
Abb.FuegeHinzu(&sK);
Abb.Zeichne();

return 0;
}
