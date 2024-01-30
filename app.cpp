#include "fraction.h"
#include <iostream>
using namespace std;

int main()
{
    Fraction fract1;
    Fraction fract2(14, 21);
    Fraction fract3(11, -8);
    Fraction fract4(fract3);

    cout << "fract1 " << endl;
    fract1.print();
    cout << "fract2 " << endl;
    fract2.print(); 
    cout << "fract3 " << endl;
    fract3.print(); 
    cout << "fract4 " << endl;
    fract4.print();

    fract3.setNumer(4);
    cout << "fract1" ;
    fract1.print();
    fract2.setDenom(-5);
    cout << "fract2 ";
    fract2.print();
     
    cout << "fract1's numer " << fract1.getNumer() << endl;
    cout << "fract2's denom " << fract2.getDenom() << endl;

    return 0;
}