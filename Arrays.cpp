// if size of array is n
// index from 0 to ( n - 1 )

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number[10];
//     cout << number[9]; // last element
//     // it has 10 elements that is at 0,1,2,3,4,5,6,7,8,9 index

//     // cout << number[10]; // error

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[3] = {0, 1, 2};
//     // three elements and index are 0 , 1 , 2
//     // here elements also 0 , 1 , 2

//     cout << arr[0] << endl; // 1st element at 0th index
//     cout << arr[1] << endl; // 2nd element at 1st index
//     cout << arr[2] << endl; // 3rd elements at 2nd index

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char name1[] = "Sumukh";
//     char name2[] = {'S', 'u', 'm', 'u', 'k', 'h'};
//     // both are correct

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[1000];
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Output array is:\n";
    int newArr[size];
    newArr[0] = arr[0];
    for (int i = 1; i < size; i++)
    {
        newArr[i] = newArr[i - 1] + arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << newArr[i] << " ";
    }

    return 0;
}