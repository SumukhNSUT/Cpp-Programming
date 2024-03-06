#include <iostream>
using namespace std;

int main()
{
    int *ptr1;
    cout << "Size of pointer1: " << sizeof(ptr1) << " bytes" << endl;
    char *ptr2;
    cout << "Size of pointer2: " << sizeof(ptr2) << " bytes" << endl;
    float *ptr3;
    cout << "Size of pointer3: " << sizeof(ptr3) << " bytes" << endl;
    double *ptr4;
    cout << "Size of pointer4: " << sizeof(ptr4) << " bytes" << endl;
    bool *ptr5;
    cout << "Size of pointer5: " << sizeof(ptr5) << " bytes" << endl;
    return 0;
}