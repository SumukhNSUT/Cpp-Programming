#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[4] = {1, 2, 3, 4};
    // remove 3
    // swap 3 and last element
    swap(arr[2], arr[3]);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}