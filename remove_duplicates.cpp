#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> v(size);
    cout << "Enter elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    // sort the vector
    sort(v.begin(), v.end());

    // check for duplicates
    int unique_index = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != v[unique_index])
        {
            unique_index++;
            v[unique_index] = v[i];
        }
        continue;
    }
    cout << "Without duplicates:\n";
    for (int i = 0; i <= unique_index; i++) // loop until unique_index
    {
        cout << v[i] << " ";
    }
    return 0;
}
