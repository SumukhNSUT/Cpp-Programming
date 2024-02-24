#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int *ptr; // declaring a pointer type variable which can point to
    // address and basically can store the address
    ptr = &num; // storing address of num in pointer type variable ptr

    cout << "value of num is: " << *ptr << endl; // here * works as dereference operator
                                                 // and gives the value stored in num to which
                                                 // ptr is pointing

    cout << "address of num is: " << ptr; // gives the address of num
    return 0;
    // another way of initialising a pointer:
    // int *ptr = &num;
}