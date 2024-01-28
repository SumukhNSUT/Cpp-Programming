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
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
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
    cout << endl;

    // Sorting the same array using selection sort
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    cout << "Sorted array using selection sort is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Linear search
    cout << "Enter element to be searched using linear search: ";
    int key;
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "Element found using linear search\n";
            cout << "Present at " << i << " index in array";
            break;
        }
        else
        {
            cout << "Element not found using linear search";
            break;
        }
    }
    cout << endl;

    // Binary search
    int key2;
    cout << "Enter element to be searched using binary search: ";
    cin >> key2;

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key2 == arr[mid])
        {
            cout << "Element found using binary search\n";
            cout << "Present at " << mid << " index in array";
            break;
        }
        else if (key2 < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (start > end)
    {
        cout << "Element not found using binary search\n";
    }

    return 0;
}
