#include <iostream>
using namespace std;

class Fruit
{
public:
    // properties
    string colour;
    int price;
};

int main()
{
    Fruit apple; // object created statically
    // static memory allocation
    apple.colour = "Red";
    cout << "Apple is " << apple.colour << endl;

    Fruit *mango = new Fruit;
    // object created dynamically
    // dynamic memory allocation
    mango->colour = "Yellow";
    // accessed using -> operator instead of . operator
    cout << "The colour of Mango is " << mango->colour << endl;
    return 0;
}