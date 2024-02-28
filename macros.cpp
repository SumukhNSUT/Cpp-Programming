#include <iostream>
using namespace std;

#define pie 3.14 // macro

int main()
{
    int r = 5;
    // float pie = 3.14;
    float area = pie * r * r;
    // instead of creating a variable pie , we created a macro
    // variable requires space but macro don't
    // pie = pie + 1 , not possible , as macros can't be changed like variables

    cout << "The area is: " << area << endl;
}