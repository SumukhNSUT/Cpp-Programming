#include <iostream>
using namespace std;

// bubble sorting
void bubbleSort(int arr[5])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++) // j < 4 will also work

        {
            if (arr[j] > arr[j + 1])
            {
                // temp variable declared for swapping
                // swapping arr[j] with arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5];
    cout << "Enter array of 5 elements:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "The sorted array is:\n";
    bubbleSort(arr);

    return 0;
}
