#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(char string[])
{
    int start = 0;
    int end = strlen(string) - 1;
    while (start < end)
    {
        if (string[start] != string[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    cout << "Enter the string: ";
    char str[20];
    cin >> str;

    bool a = isPalindrome(str);
    cout << a;
}