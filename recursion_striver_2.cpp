// #include <iostream>
// using namespace std;
// // reverse array

// void reverse(int start, int end, int arr[], int size)
// {
//     if (start > end)
//     { // base case
//         return;
//     }
//     else
//     {
//         swap(arr[start], arr[end]);
//         reverse(start + 1, end - 1, arr, size);
//     }
// }

// int main()
// {
//     cout << "Enter size of array: ";
//     int size;
//     cin >> size;

//     int arr[size];
//     cout << "Enter elements:\n";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     reverse(0, size - 1, arr, size);
//     // print reversed array
//     cout << "Reversed array is -> ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// check if a string is a palindrome
#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(int start, int end, string s)
{
    if (start >= end)
    {
        return true;
    }
    else
    {
        if (s[start] != s[end])
        {
            return false;
        }
        return checkPalindrome(start + 1, end - 1, s);
    }
}

int main()
{
    string s1;
    cout << "Enter a string: ";
    cin >> s1;

    if (checkPalindrome(0, s1.length() - 1, s1))
    {
        cout << s1 << " is a palindrome." << endl;
    }
    else
    {
        cout << s1 << " is not a palindrome." << endl;
    }

    return 0;
}
