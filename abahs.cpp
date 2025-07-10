#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

// Helper function to map grid positions to letters
char getLetter(int row, int col) {
    // A-E: row 0, F-J: row 1, ..., Z: row 5, col 0
    int idx = row * 5 + col;
    if (idx < 25)
        return 'A' + idx;
    else
        return 'Z'; // Only (5,0) is Z
}

string generateResult(vector<vector<int>>& Grid, vector<vector<int>>& instructions) {
    string result = "";
    for (auto& nav : instructions) {
        int x1 = nav[0] - 1, y1 = nav[1] - 1;
        int x2 = nav[2] - 1, y2 = nav[3] - 1;
        // Find the starting letter (represented by 1 in the grid)
        if (Grid[x1][y1] == 1) {
            result += getLetter(x1, y1);
        }
        // Traverse the path and collect letters
        int dx = (x2 > x1) ? 1 : (x2 < x1) ? -1 : 0;
        int dy = (y2 > y1) ? 1 : (y2 < y1) ? -1 : 0;
        int cx = x1, cy = y1;
        while (cx != x2 || cy != y2) {
            cx += dx;
            cy += dy;
            if (Grid[cx][cy] == 1) {
                result += getLetter(cx, cy);
            }
        }
    }
    return result;
}

int main() {
    vector<vector<int>> Grid(6, vector<int>(5));
    for (int i = 0; i < 6; ++i)
        for (int j = 0; j < 5; ++j)
            cin >> Grid[i][j];

    vector<vector<int>> instructions;
    cin.ignore();
    while (true) {
        string line;
        getline(cin, line);
        if (line == "-1")
            break;
        stringstream ss(line);
        vector<int> nav(4);
        for (int i = 0; i < 4; ++i)
            ss >> nav[i];
        instructions.push_back(nav);
    }

    string result = generateResult(Grid, instructions);
    cout << result << endl;
    return 0;
}
