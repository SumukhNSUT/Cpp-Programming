#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Task {
    char id;
    int effort;
    int reward;
};

int main() {
    int N, Smax;
    cin >> N >> Smax;

    vector<Task> tasks(N);
    for (int i = 0; i < N; ++i) {
        cin >> tasks[i].id >> tasks[i].effort >> tasks[i].reward;
    }

    // DP[i][j] = max reward using first i tasks with j stamina
    vector<vector<int>> dp(N + 1, vector<int>(Smax + 1, 0));
    vector<vector<bool>> take(N + 1, vector<bool>(Smax + 1, false));

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= Smax; ++j) {
            // Not taking task i
            dp[i][j] = dp[i - 1][j];

            if (j >= tasks[i - 1].effort) {
                int val = dp[i - 1][j - tasks[i - 1].effort] + tasks[i - 1].reward;
                if (val > dp[i][j]) {
                    dp[i][j] = val;
                    take[i][j] = true;
                }
            }
        }
    }

    // Backtrack to get selected tasks
    vector<char> selected;
    int totalEffort = 0, totalReward = 0;
    int i = N, j = Smax;
    while (i > 0) {
        if (take[i][j]) {
            selected.push_back(tasks[i - 1].id);
            totalEffort += tasks[i - 1].effort;
            totalReward += tasks[i - 1].reward;
            j -= tasks[i - 1].effort;
        }
        --i;
    }

    if (selected.empty()) {
        cout << -1 << endl;
    } else {
        reverse(selected.begin(), selected.end());
        for (char c : selected) cout << c << " ";
        cout << "\n" << totalEffort << " " << totalReward << endl;
    }

    return 0;
}