#include <iostream>
using namespace std;

int main()
{
    int num, digit = 0, revNum = 0;
    cin >> num;

    for (int i = num; i > 0; i = i / 10)
    {
        digit = i % 10;
        revNum = revNum * 10 + digit;
    }

    if (revNum == num)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}