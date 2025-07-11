#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> grid;
vector<vector<int>> paths;
int n, target;

void findPaths(int row, int col, int currentSum, vector<int>& currentPath) {
    // Add current cell value to sum and path
    currentSum += grid[row][col];
    currentPath.push_back(grid[row][col]);

    // If we reached bottom-right corner
    if (row == n - 1 && col == n - 1) {
        if (currentSum == target) {
            paths.push_back(currentPath);
        }
        currentPath.pop_back();
        return;
    }

    // Move right if possible
    if (col + 1 < n) {
        findPaths(row, col + 1, currentSum, currentPath);
    }

    // Move down if possible
    if (row + 1 < n) {
        findPaths(row + 1, col, currentSum, currentPath);
    }

    // Backtrack
    currentPath.pop_back();
}

int main() {
    cin >> n;
    grid.resize(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> target;

    vector<int> currentPath;
    findPaths(0, 0, 0, currentPath);

    if (paths.empty()) {
        cout << "No path found" << endl;
    }
    else {
        for (auto& path : paths) {
            cout << "Path Found: ";
            for (int i = 0; i < path.size(); i++) {
                cout << path[i];
                if (i < path.size() - 1) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}