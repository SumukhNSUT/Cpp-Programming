#include <iostream>
using namespace std;

bool isFound(int arr[][3], int key)
{
    bool present = false; // Initialize to false, assuming the key is not present initially
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] == key)
            {
                present = true;
                break; // Once the key is found, no need to continue searching
            }
        }
    }
    return present;
}

int main()
{
    int arr[3][3];
    cout << "Enter 4 elements:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "Enter key: ";
    int key;
    cin >> key;

    bool x = isFound(arr, key);
    if (x)
    {
        cout << "Present\n";
    }
    else
    {
        cout << "Absent\n";
    }

    return 0;
}
