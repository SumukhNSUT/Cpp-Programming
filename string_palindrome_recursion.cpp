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
