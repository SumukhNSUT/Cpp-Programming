// Access modifiers:
// 1) Public
// 2) Private
// 3) Protected

// by deafult: private

#include <iostream>
using namespace std;

class hero
{
    // properties
public:
    int health = 100;
    char level = 'B';

private:
    int score = 10;
    // can't be accessed outside the class
    // use getter and setter for these

public: // function
    void getScore()
    {
        cout << "Score is 0 right now\n";
    }
};

int main()
{
    hero h1; // object created of class hero
    // name is h1
    // object is instance of class
    cout << h1.health << endl;
    h1.level = 'A'; // here level was B but updating to A
    // initially it was B as defined in the class
    cout << h1.level << endl;

    hero h2; // another object
    cout << h2.level << endl;
    // cout << h2.score << endl;
    // here score can't be accessed outside the class
    // being a private variable
    h2.getScore();
    return 0;
}
