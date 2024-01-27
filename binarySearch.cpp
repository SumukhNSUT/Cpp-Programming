#include <iostream>
using namespace std;

// searching using binary search
bool isPresent(int arr[], int size, int key) // both int and bool can be used
{
    int start = 0;               // starting index = 0
    int end = size - 1;          // end index
    int mid = (start + end) / 2; // mid index

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return 1;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
            // end remain same
        }
        else
        {
            end = mid - 1; // start remain same
        }

        mid = (start + end) / 2; // new mid for loop
    }
    return 0;
}

int main()
{
    int EvenArr[4] = {0, 1, 2, 3};
    int OddArr[3] = {0, 1, 2};

    if ((isPresent(EvenArr, 4, 1))) // change element here that is to be searched

    {
        cout << "Element is present\n";
    }
    else
    {
        cout << "Not present\n";
    }

    return 0;
}