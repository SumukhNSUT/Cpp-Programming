#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[20];

    cout << "Enter your name: ";
    // cin >> name; // takes only 1 word
    cin.get(name, sizeof(name));

    cout << "Your name is: " << name << endl;
    cout << "Length of your string is: " << strlen(name);

    return 0;
}
