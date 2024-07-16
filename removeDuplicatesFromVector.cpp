#include<iostream>
#include<vector>
using namespace std;

vector<int> removeDuplicates(vector<int>v) {
    vector<int> ans;
    for (int i = 0;i < v.size(); i++) {
        if (v[i] != v[i + 1]) {
            ans.push_back(v[i]);
        }
    }
    return ans;
}

int main() {
    vector<int> v = { 1,2,2,3,4,4,5,6,7,7 };
    // remove duplicates from sorted vector
    vector<int> ans = removeDuplicates(v);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}