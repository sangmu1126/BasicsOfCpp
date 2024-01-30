#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int fact = 1;
    int counter = 1;

    while (counter < n+1) {
        fact *= counter;
        counter++;
    }

    cout << fact;
}