#include <iostream>
#include <array>

using namespace std;
int main()
{
    int basic[3] = {1, 2, 3};       // simple way
    array<int, 4> a = {1, 2, 3, 4}; // using stl
    // array of size 4 created
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Element at 2nd index --> " << a.at(2) << endl;
    cout << "Empty or not --> " << a.empty() << endl; // boolean type
    cout << "First element is --> " << a.front() << endl;
    cout << "Last element --> " << a.back() << endl;

    return 0;
}