// #include <iostream>
// using namespace std;
// // mode -> most frequent element
// // having highest count
// int count(int x, int size, int arr[]) // count of x
// {
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == x)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int size;
//     cout << "Enter size: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter elements:\n";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Entered array is -> ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int mode = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (count(arr[i], size, arr) > count(mod, size, arr))
//         {
//             mode = arr[i];
//         }
//     }
//     cout << "Mode of array is -> " << mod;

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int count(int x, int size, int arr[]) // count of x
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Entered array is -> ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxCount = 0;
    vector<int> modes;
    for (int i = 0; i < size; i++)
    {
        int currentCount = count(arr[i], size, arr);
        if (currentCount > maxCount)
        {
            maxCount = currentCount;
            modes.clear();
            modes.push_back(arr[i]);
        }
        else if (currentCount == maxCount)
        {
            modes.push_back(arr[i]);
        }
    }

    cout << "Mode(s) of array is/are -> ";
    for (int i = 0; i < modes.size(); i++)
    {
        cout << modes[i] << " ";
    }

    return 0;
}
