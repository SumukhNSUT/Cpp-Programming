#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 6, 5, 0};

    for (int i = 0; i < 5 - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap arr[i] and arr[minIndex]
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
