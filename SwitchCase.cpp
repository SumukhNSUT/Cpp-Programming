// #include <iostream>
// using namespace std;

// int main()
// {
//     char ch = '1';
//     cout << endl;

//     switch (ch)
//     {
//     case 1:
//         cout << "Integer 1"
//              << endl;

//     case '1':
//         cout << "Character 1\n";

//     case 2:
//         cout << "Integer 2\n";

//     case 'a':
//         cout << "Character a\n";

//     case '2':
//         cout << "Character 2\n";

//     default:
//         cout << "It is default if none of case match\n";
//     }
//     return 0;
// }
// if break not used , then all statements will be executed after the true case

// CORRECTED CODE
#include <iostream>
using namespace std;

int main()
{
    char ch = '1';
    cout << endl;

    switch (ch)
    {
    case 1:
        cout << "Integer 1"
             << endl;
        break;

    case '1':
        cout << "Character 1\n";
        break;
    case 2:
        cout << "Integer 2\n";
        break;
    case 'a':
        cout << "Character a\n";
        break;
    case '2':
        cout << "Character 2\n";
        break;
    default:
        cout << "It is default if none of case match\n";
    }
    return 0;
}