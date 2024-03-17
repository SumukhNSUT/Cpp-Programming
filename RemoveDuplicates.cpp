#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> removeDuplicates(vector<int> &v)
{
    sort(v.begin(), v.end());
    vector<int> ans;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != v[i - 1])
        {
            ans.push_back(v[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> v;
    cout << "Enter size: ";
    int size;
    cin >> size;

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << endl;
    cout << "Original -> ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "After removing duplicates -> ";

    v = removeDuplicates(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
