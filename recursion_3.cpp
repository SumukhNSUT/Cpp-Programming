// CHECK FOR SORTED ARRAY USING RECURSION
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // base case
    if (size <= 1)
    {
        return true;
    }
    else
    {
        if (arr[size - 1] < arr[size - 2])
        { // Corrected the comparison
            return false;
        }
    }
    return isSorted(arr, size - 1);
}

int main()
{
    cout << "Enter size of array: ";
    int size;
    cin >> size;

    int arr[size];
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (isSorted(arr, size))
    { // Corrected the function call
        cout << "The array is sorted\n";
    }
    else
    {
        cout << "The array is not sorted\n";
    }
    return 0;
}
