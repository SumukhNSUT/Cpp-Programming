#include <iostream>
#include <string>
using namespace std;

void processStringByValue(string str)
{
    // Modifications to 'str' here won't affect the original string outside the function
}

void processStringByReference(string &str)
{
    // Modifications to 'str' here will affect the original string outside the function
}

void displayString(const string &str)
{
    // Read-only access to the original string
    cout << str << endl;
}

int main()
{
    string myString = "Hello";
    displayString(myString);
    return 0;
}

void processStringByPointer(string *ptrToStr)
{
    // Modify the original string using the pointer
    (*ptrToStr) += " (modified)";
}

int main()
{
    string myString = "Hello";
    processStringByPointer(&myString);
    cout << myString << endl; // Output: Hello (modified)
    return 0;
}
