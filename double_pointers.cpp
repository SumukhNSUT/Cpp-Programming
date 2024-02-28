#include <iostream>
using namespace std;
int main()
{
    // double pointers
    int i = 5;
    int *ptr = &i;

    int **ptr2 = &ptr; // double pointer
    // a pointer ptr2 is created which stores address of ptr
    // double star were used because address of a pointer ( ptr ) was stored
    // ptr2 is known as double pointer declared by using **
}