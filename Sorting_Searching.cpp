// step - 1 : take array as input
// step - 2 : perform both selection and bubble sort
// step - 3 : then perform both linear and binary search on the array
#include <iostream>
using namespace std;

int main()
{
    // step - 1
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

    return 0;
}