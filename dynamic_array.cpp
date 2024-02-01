#include <iostream>
using namespace std;

int main()
{
    int size;
    int* pArray;

    do
    {
        cout << "Array size : ";
        cin >> size;
    }
    while(size <= 0);

    pArray = new int[size];
    for (int i=0; i < size; i++) {
        cout << i;
    }
    delete pArray;
}