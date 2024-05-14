#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part)
{
    for (int i = 0; i <= s.length() - part.length();)
    {
        int counter = 0;
        for (int j = i; j < i + part.length(); j++)
        {
            if (s[j] == part[j - i])
            {
                counter++;
            }
        }
        if (counter == part.length())
        {
            for (int l = i; l < s.length() - part.length(); l++)
            {
                s[l] = s[l + part.length()];
            }
            s.resize(s.length() - part.length());
        }
        else
        {
            // Increment i only when no match is found
            i++;
        }
    }
    return s;
}

int main()
{
    string a = removeOccurrences("dababccd", "abc");
    cout << a;
    return 0;
}
