#include <iostream>
using namespace std;

class Hero
{
public:
    static int TimeToComplete; // static
                               // initialise it outside the class
};

int Hero ::TimeToComplete = 5;
// :: is scope resolution operator
// datatype classname ::fieldname = value; // syntax

int main()
{
    cout << Hero::TimeToComplete << endl;

    Hero sumukh;
    cout << sumukh.TimeToComplete << endl;
    // by using objects
    sumukh.TimeToComplete = 10;
    cout << sumukh.TimeToComplete << endl;
    // here the static was updated , initially it was 5 but later became 10 after update
    return 0;
}