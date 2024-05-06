#include <iostream>
using namespace std;
int main()
{

    int x = 5;
    int *ptr = &x;

    cout << ptr << endl;
    cout << *ptr << endl; // dereference
    // can also write *(ptr)
    return 0;
}