// step - 1 : take array as input
// step - 2 : perform both selection and bubble sort
// step - 3 : then perform both linear and binary search on the array
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Entered elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting the array (bubble sort)
    // Using nested loops for repeated comparisons and swaps
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swapping
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array using bubble sort is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
