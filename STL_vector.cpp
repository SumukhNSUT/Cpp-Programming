#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    for (int i = 3; i <= 5; i++)
    {
        v.push_back(i);
    }
    cout << "Size is --> " << v.size() << endl;
    cout << "Capacity is --> " << v.capacity() << endl
         << endl;

    cout << "1st element --> " << v.front() << endl;
    cout << "Last --> " << v.back() << endl;

    cout << endl
         << endl
         << endl;

    vector<int> v2(5, 1); // vector of size 5
    // all elements = 1
    cout << v2.size() << endl;
    cout << v2.capacity() << endl;
    v2.push_back(1);
    cout << v2.capacity() << endl; // doubles the capacity
    cout << v2.size() << endl;     // size increase by 1

    return 0;
}