#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    cout << "Enter a word: ";
    char word[20];
    cin >> word;

    int ans = getLength(word);
    cout << "The length is: " << ans;
    return 0;
}
