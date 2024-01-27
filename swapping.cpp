#include <iostream>
using namespace std;

// swapping function
void swap(int x, int y)
{
    int temp;
    temp = x; // assigning value of x to temp
    x = y;    // assigning value of y to x
    y = temp; // assigning value of temp to y
    // variable written on left is assigned the value of the variable written on right
    // eg: int x = 2; means assigning value to x ( written on left )
    cout << x << " " << y;
}

int main()
{
    int a, b;
    a = 1;
    b = 2;
    // swapping values of a and b
    swap(a, b);

    return 0;
}