#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> m;
    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 4, 5, 6, 7, 8 };

    for (int i = 0; i < 5; ++i) {
        m[arr1[i]] = arr2[i];
    }

    for (auto& it : m) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}


// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, int> m;
//     int arr[] = { 1,1,1,3,3,4,5,5,6 };

//     for (auto it : arr) {
//         m[it]++;
//     }

//     for (auto it : m) {
//         cout << it.first << " " << it.second << endl;
//     }

//     return 0;
// }
