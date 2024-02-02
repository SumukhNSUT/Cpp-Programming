#include <iostream>
using namespace std;

bool printArray(int arr[]) // Specify the type of array elements (int)
{
    // Your function logic here
    for (int i = 0; i < 5; i++)
    {
        // Access and process each element in the array
        cout << arr[i] << " ";
    }

    // Your specific logic goes here

    return true;
}

int main()
{
    int arr[5];

    // Initialize the array elements, for example, by taking user input
    cout << "Enter 5 elements for the array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Call the function with the array
    bool result = printArray(arr);

    return 0;
}

// #include <iostream>
// using namespace std;

// bool arrays(int arr[])
// {

//     return true;
// }

// int main()
// {
//     int arr[5];
//     arrays(arr);

//     return 0;
// }
