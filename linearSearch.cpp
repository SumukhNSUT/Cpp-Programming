#include <iostream>
using namespace std;

int main()
{
    bool isPresent = 1;

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int arr[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            isPresent = 1;
            break;
        }
        else
        {
            isPresent = 0;
        }
    }

    if (isPresent)
    {
        cout << "It is present\n";
    }
    else
    {
        cout << "It is absent\n";
    }

    return 0;
}