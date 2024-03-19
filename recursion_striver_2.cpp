#include <iostream>
using namespace std;
// reverse array

void reverse(int start, int end, int arr[], int size)
{
    if (start > end)
    { // base case
        return;
    }
    else
    {
        swap(arr[start], arr[end]);
        reverse(start + 1, end - 1, arr, size);
    }
}

int main()
{
    cout << "Enter size of array: ";
    int size;
    cin >> size;

    int arr[size];
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverse(0, size - 1, arr, size);
    // print reversed array
    cout << "Reversed array is -> ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}