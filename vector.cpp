// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     // cout << v.capacity(); // total space whether empty or filled
//     // cout << endl;
//     // cout << v.size(); // total elements
//     // // capacity >= size

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     // cout << v.front() << endl;
//     // cout << v.back();

//     v.pop_back();
//     cout << v.back() << endl;
//     cout << v.front();
//     v.clear(); // all elements of vector removed
//     // size = 0 but capacity != 0

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, 1); // size = 5 and all elements = 1

    // printing the vector using index-based for loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
