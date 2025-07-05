#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSwaps(vector<int>& A) {
    int n = A.size();
    vector<int> count(4, 0);
    for (int x : A) {
        if (x < 1 || x > 3) return -1;
        count[x]++;
    }

    int n1 = count[1], n2 = count[2], n3 = count[3];
    int seg1_2 = 0, seg1_3 = 0;
    int seg2_1 = 0, seg2_3 = 0;
    int seg3_1 = 0, seg3_2 = 0;

    for (int i = 0; i < n1; ++i) {
        if (A[i] == 2) seg1_2++;
        else if (A[i] == 3) seg1_3++;
    }
    for (int i = n1; i < n1 + n2; ++i) {
        if (A[i] == 1) seg2_1++;
        else if (A[i] == 3) seg2_3++;
    }
    for (int i = n1 + n2; i < n; ++i) {
        if (A[i] == 1) seg3_1++;
        else if (A[i] == 2) seg3_2++;
    }

    int swaps = 0;

    int swap12 = min(seg1_2, seg2_1);
    swaps += swap12;
    seg1_2 -= swap12;
    seg2_1 -= swap12;

    int swap13 = min(seg1_3, seg3_1);
    swaps += swap13;
    seg1_3 -= swap13;
    seg3_1 -= swap13;

    int swap23 = min(seg2_3, seg3_2);
    swaps += swap23;
    seg2_3 -= swap23;
    seg3_2 -= swap23;

    int remaining = seg1_2 + seg1_3 + seg2_1 + seg2_3 + seg3_1 + seg3_2;
    swaps += 2 * (remaining / 3);

    return swaps;
}

vector<int> solve(int N, vector<int> A, int Q, vector<vector<int>> queries) {
    vector<int> result;
    for (auto& q : queries) {
        int idx = q[0], val = q[1];
        if (idx < 0 || idx >= N || val < 1 || val > 3) continue;
        A[idx] = val;
        int res = minSwaps(A);
        if (res != -1) result.push_back(res);
    }
    return result;
}

int main() {
    // ---------- Test Case 1 ----------
    int N1 = 10;
    vector<int> A1 = { 2, 2, 2, 3, 3, 3, 1, 1, 1, 1 };
    vector<vector<int>> queries1 = {
        {9, 1}, {9, 2}, {9, 3}, {0, 3}, {1, 3}, {2, 3},
        {3, 1}, {4, 1}, {5, 2}, {6, 2}, {7, 2}, {8, 2},
        {9, 2}, {0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2}
    };

    cout << "Test Case 1 Output:\n";
    vector<int> result1 = solve(N1, A1, queries1.size(), queries1);
    for (int r : result1) cout << r << "\n";

    // ---------- Test Case 2 ----------
    int N2 = 100;
    vector<int> A2 = {
        2,2,3,2,3,1,2,2,2,2,3,1,2,3,3,2,2,3,3,2,
        1,2,1,1,2,3,3,1,1,1,3,2,1,2,3,2,2,1,2,3,
        3,1,2,1,3,1,1,1,2,3,3,3,3,3,2,1,3,2,1,3,
        2,1,2,1,1,2,1,3,1,2,3,1,1,1,1,3,3,2,3,3,
        1,2,3,2,1,1,2,1,2,2,3,1,1,3,3,2,2,3,2,1
    };
    vector<vector<int>> queries2 = {
        {94, 2}, {40, 3}, {14, 3}, {14, 1}, {1, 1}, {98, 1}, {62, 1}, {91, 3}, {45, 2}, {19, 3},
        {43, 1}, {59, 3}, {43, 2}, {48, 2}, {90, 3}, {17, 3}, {82, 3}, {98, 3}, {26, 2}, {60, 3},
        {98, 3}, {51, 2}, {5, 1}, {64, 2}, {21, 1}, {36, 3}, {23, 1}, {11, 2}, {48, 3}, {6, 1},
        {21, 3}, {52, 1}, {87, 2}, {55, 1}, {3, 2}, {35, 3}, {32, 3}, {41, 3}, {3, 3}, {30, 1},
        {60, 1}, {59, 3}, {58, 1}, {57, 2}, {5, 1}, {14, 1}, {73, 2}, {86, 3}, {60, 3}, {73, 3},
        {21, 2}, {17, 2}, {40, 2}, {52, 3}, {54, 3}, {33, 1}, {5, 1}, {64, 2}, {28, 2}, {81, 1},
        {33, 1}, {25, 3}, {93, 3}, {92, 2}, {70, 1}, {34, 2}, {36, 3}, {73, 2}, {17, 2}, {64, 2},
        {75, 3}, {62, 1}, {56, 3}, {39, 1}, {6, 3}, {96, 2}, {65, 3}, {31, 1}, {96, 1}, {93, 2},
        {44, 3}, {31, 3}, {61, 3}, {76, 2}, {16, 2}, {41, 3}, {70, 1}, {84, 1}, {46, 2}, {51, 1},
        {46, 1}, {41, 1}, {72, 3}, {23, 2}, {88, 2}, {21, 1}, {35, 2}, {76, 2}, {54, 2}, {99, 2},
        {40, 3}, {74, 2}, {43, 3}, {63, 1}, {90, 3}, {34, 3}, {41, 3}, {4, 1}, {31, 3}, {31, 3},
        {4, 3}, {36, 2}, {90, 3}, {5, 1}, {72, 1}, {75, 1}, {58, 3}, {5, 1}, {2, 3}, {0, 1},
        {37, 2}, {90, 1}, {71, 2}, {30, 3}, {97, 3}, {93, 1}, {83, 1}, {43, 3}, {17, 2}, {65, 3},
        {24, 1}, {8, 3}, {30, 2}, {12, 2}, {87, 3}, {26, 2}, {43, 3}, {39, 3}, {69, 1}, {45, 3},
        {71, 3}
    };

    cout << "\nTest Case 2 Output:\n";
    vector<int> result2 = solve(N2, A2, queries2.size(), queries2);
    for (int r : result2) cout << r << "\n";

    return 0;
}
