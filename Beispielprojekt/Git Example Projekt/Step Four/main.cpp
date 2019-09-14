#include <iostream>
using namespace std;

#include "Punkt.h"
#include "Linie.h"

int main()
{
/* Samples */
Punkt m(2.0,2.0);
Punkt punkt1(3.0,4.0);
Linie linie1(m.punkt1);
cout << "Hello World" << endl;
return 0;
}
