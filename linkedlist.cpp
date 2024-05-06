// basic concept of pointers and -> operator
#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    int age;
    string name;
};

int main()
{
    person p1, p2;
    person *pptr = &p1;

    p1.age = 99;
    p1.name = "Jacob";

    cout << p1.age << endl;

    pptr->age = 56;
    (*pptr).age = 56;
    // they both are same things
    cout << pptr->age << endl;

    return 0;
}
