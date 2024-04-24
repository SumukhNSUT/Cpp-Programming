// basic code for extracting digits
#include <iostream>
using namespace std;

int main()
{
    int num, digit = 0;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Digits in reverse order: ";
    for (int i = num; i > 0; i = i / 10)
    {
        digit = i % 10;
        cout << digit << " ";
    }
    return 0;
}
