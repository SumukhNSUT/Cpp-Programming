#include <iostream>
using namespace std;

int getMin(int arr[], int size)
{

    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int getMax(int arr[], int size)
{

    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter elements:\n";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum is: " << getMax(arr, size) << endl;
    cout << "Minimum is: " << getMin(arr, size) << endl;
    return 0;
}