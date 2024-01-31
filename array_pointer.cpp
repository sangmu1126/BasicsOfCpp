#include <iostream>
using namespace std;

int getSum(const int*, int size);
void reverse1(int*, int size);
void reverse2(int*, int size);

int main()
{
    int arr[5] = {10, 11, 12, 13, 14};

    for (int i=0; i < 5; i++) {
        cout << "Pointer Address" << endl;
        cout << arr+i << endl;
        cout << "Address using &" << endl;
        cout << &arr[i] << endl;
        cout << arr[i] << " ";
        cout << *(arr+i) << endl << endl;
    }

    // element sum
    cout << getSum(arr, 5) << endl;

    //reverse
    reverse1(arr, 5);

    for (int i=0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    reverse2(arr, 5);
}

int getSum(const int* p, int size) {
    int sum=0;
    for (int i=0; i < size; i++) {
        sum += *(p+i);
    }
    return sum;
}

void reverse2(int* p, int size) {
    for (int i=size-1; i >= 0; i--) {
        cout << *(p+i) << " ";
    }
}
void reverse1(int* p, int size) {
    int i = 0;
    int j = size -1;
    while (i < size/2) {
        int tmp = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = tmp;
        i++;
        j--;
    }
}