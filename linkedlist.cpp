#include <iostream>
#include <string>
using namespace std;

struct person
{
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
    return 0;
}
