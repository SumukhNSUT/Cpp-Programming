// love babbar c++ playlist , video number 31 ( lecture - 28 )

#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int &j = i; // j is reference variable of i
    // any changes made in j will be made in i automatically
    // any changes made in i will be done in j automatically

    cout << i << endl;
    cout << j << endl;

    i++;
    cout << i << endl
         << j << endl;

    j++;
    cout << i << endl
         << j << endl;

    return 0;
}