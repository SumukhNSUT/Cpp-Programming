#include <iostream>
#include <string>

using namespace std;

// l = lowercase
// u = uppercase
char ToLowerCase(char l)
{
    if (l >= 'A' && l <= 'Z')
    {
        return l - 'A' + 'a';
    }
    else
    {
        return l;
    }
}

int main()
{
    char upper;
    cout << "Enter uppercase letter: ";
    cin >> upper;

    char lower = ToLowerCase(upper);
    cout << "The lowercase is: " << lower << endl;

    return 0;
}
