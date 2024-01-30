#include <iostream>
using namespace std;

int main()
{
    int score = 92;
    int* pScore = &score;

    cout << "score direct access : " << score << endl;
    cout << "score indirect access : " << *pScore << endl;
}