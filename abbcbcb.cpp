#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;


int getPalindromesCount(const string& s) {
    int n = s.size();
    long long ans = 0;


    vector<vector<int>> prefix(2, vector<int>(n + 1, 0));
    vector<vector<int>> suffix(2, vector<int>(n + 1, 0));
    for (int i = 0; i < n; ++i) {
        prefix[0][i + 1] = prefix[0][i] + (s[i] == '0');
        prefix[1][i + 1] = prefix[1][i] + (s[i] == '1');
    }
    for (int i = n - 1; i >= 0; --i) {
        suffix[0][i] = suffix[0][i + 1] + (s[i] == '0');
        suffix[1][i] = suffix[1][i + 1] + (s[i] == '1');
    }


    for (int b = 1; b < n - 3; ++b) {
        for (int c = b + 1; c < n - 2; ++c) {
            for (int d = c + 1; d < n - 1; ++d) {

                for (int x = 0; x < 2; ++x) {
                    for (int y = 0; y < 2; ++y) {
                        if (s[b] == '0' + y && s[d] == '0' + y && s[c] == s[c]) {
                            long long left = prefix[x][b];
                            long long right = suffix[x][d + 1];
                            ans = (ans + (left * right) % MOD) % MOD;
                        }
                    }
                }
            }
        }
    }
    return ans;
}

int main() {
    string input = "01111"; // Change this to test other cases
    cout << getPalindromesCount(input) << endl;
    return 0;
}