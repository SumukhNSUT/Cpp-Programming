#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << "num is: " << num << endl;
    cout << "address is: " << &num;
    cout << endl;

    cout << "Dealing with pointers\n";
    // pointers
    int *ptr = &num;
    // pointer storing address of num
    // it is int because num is int
    // jiska adress store hota hai , usi type ka pointer banta hai

    cout << ptr << endl; // address of num
    cout << *ptr;        // it means value of num
    // * is dereference operator
    cout << endl;

    /* ptr is a pointer to an integer, and it's assigned the address of num.
 When you print *ptr, it dereferences the pointer, meaning it accesses the value stored
 at the memory address ptr is pointing to, which in this case is the address of num.
 Therefore, printing *ptr will give the value stored in num, which is 5.
 So, printing *ptr will indeed give 5 */

    // BETTER WAY FOR UNDERSTANDING POINTER
    int b = 10;
    int *ptr1; // method done above is better way of declaring a pointer
    // both yields same result though
    ptr1 = &b;

    cout << "value of b is: " << *ptr1 << endl; // dereferencing the pointer
    cout << "address is: " << ptr1 << endl;
    // *ptr says give me the value that ptr is pointing to
    return 0;
}
