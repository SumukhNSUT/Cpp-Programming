#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;

    (*ptr)++; // same as num++
    cout << num << endl;
}
// ptr points to address of num
// ptr = address of num
// *ptr gives value at the address block where ptr was pointing

// *ptr - value at address stored in ptr