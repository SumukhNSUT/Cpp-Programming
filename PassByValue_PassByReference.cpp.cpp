#include <iostream>
using namespace std;

void update1(int n) // pass by value
{
    // here , a copy of n is created and original is unaffected
    n++;
}
void update2(int &n) // pass by reference
{
    // here original is affected
    n++;
}

int main()
{

    int n = 5;
    cout << "Before: " << n << endl;

    update1(n);
    cout << "After update1: " << n << endl;

    update2(n);
    cout << "After update2: " << n << endl;
}