#include <iostream>
using namespace std;

int main() 
{
    int size;

    double sum = 0.0;
    double product = 1.0;
    int counter = 0;

    do {
        cin >> size;
        sum += size;
        product *= size;
        counter++;
    }while(counter < size);

    cout << sum << "\n" << product;

}