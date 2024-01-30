#include <iostream>
using namespace std;

void swap(int& first, int& second);

int main()
{
    int x =10;
    int y = 20;

    cout << "Before swap" << endl;
    cout << "x :" << x << ", y : " << y << endl;
    swap(x,y);
    cout << "After swap" << endl;
    cout << "x :" << x << ", y : " << y << endl;

}

void swap(int& first, int& second) {
    int tmp;
    tmp = first;
    first = second;
    second = tmp;
}