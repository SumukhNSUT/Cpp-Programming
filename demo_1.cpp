#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str1 = "sumukh";
    string str2 = "sum";

    if (str1.find(str2))
    {
        cout << "true\n";
        return 0;
    }
    cout << "not found";

    return 0;
}