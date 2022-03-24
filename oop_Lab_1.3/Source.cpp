#include <iostream>
#include "Fraction.h"

using namespace std;

int main() 
{
    Fraction a,b,c;
    a.read();
    cout << "Nomer 1 = "; a.display();
 
    b.read();
    cout << "Nomer 2 = "; b.display();

    a.toString();
    b.toString();

    c.Sub(a, b);
    c.Porivn(a, b);

    return 0;
}