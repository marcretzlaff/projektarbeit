#include <iostream>
using namespace std;

#include "Punkt.h"
#include "Linie.h"
#include "Grafik.h"

int main()
{
/* Kreis */
Punkt m(2.0,2.0);
Punkt punkt1(3.0,4.0);
Linie linie1(m,punkt1);
return 0;
}