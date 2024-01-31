#include "fraction.h"
#include <iostream>
using namespace std;

Fraction* larger(Fraction*, Fraction*);

int main() {
    Fraction fract1(3,13);
    Fraction fract2(5,17);
    
    cout << "Who is larger? : ";
    larger(&fract1, &fract2);

    Fraction fract3(4,9);
    Fraction fract4(1,6);
    
    cout << "Who is larger? : ";
    larger(&fract3, &fract4);

}

Fraction* larger(Fraction *fract1, Fraction *fract2) {
    if (fract1->getNumer() * fract2->getDenom() > fract2->getDenom() * fract1->getNumer()) return fract1;
    else return fract2;
}