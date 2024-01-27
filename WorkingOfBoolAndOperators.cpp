#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 5;

    bool equality = (a == b);
    cout << equality << endl;
    // since a is not equal to b , hence bool returns 0 that is false

    bool greaterThan = (a >= b);
    cout << greaterThan << endl; // returns 0 as it is false

    bool unequality = (a != b);
    cout << unequality;

    return 0;
}
