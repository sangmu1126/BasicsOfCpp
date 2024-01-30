#include <iostream>
using namespace std;

int* larger(int* x, int* y) {
    if (*x > *y) {
        return x;
    }
    else {
        return y;
    }
}

int main()
{
    int a = 10;
    int b = 30;
    int c = *larger(&a, &b);

    cout << "c : " << c << endl;
}