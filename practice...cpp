#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    bool check(vector<int> push) {
        for (int i = 0; i < push.size() - 1; i++) {
            for (int j = i + 1; j < push.size(); j++) {
                if (push[i] == push[j]) {
                    return true;
                }
            }
        }
        return false;
    }
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        vector<int> push;
        for (int i = 0;i < 9;i++) {

            for (int j = 0;j < 9;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }
            if (check(push)) {
                return false;
            }
            push.clear();
        }
        for (int i = 0;i < 9;i++) {

            for (int j = 0;j < 9;j++) {
                if (b[j][i] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }
            if (check(push)) {
                return false;
            }
            push.clear();
        }
        for (int i = 0;i < 3;i++) {

            for (int j = 0;j < 3;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }


        }
        if (check(push)) {
            return false;
        }
        push.clear();
        for (int i = 3;i < 6;i++) {

            for (int j = 0;j < 3;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }


        }
        if (check(push)) {
            return false;
        }
        push.clear();
        for (int i = 6;i < 9;i++) {

            for (int j = 0;j < 3;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }

        }
        if (check(push)) {
            return false;
        }
        push.clear();
        for (int i = 0;i < 3;i++) {

            for (int j = 3;j < 6;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }

        }
        if (check(push)) {
            return false;
        }
        push.clear();
        for (int i = 3;i < 6;i++) {

            for (int j = 3;j < 6;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }


        }
        if (check(push)) {
            return false;
        }
        push.clear();
        for (int i = 6;i < 9;i++) {

            for (int j = 3;j < 6;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }


        }
        if (check(push)) {
            return false;
        }
        push.clear();
        for (int i = 0;i < 3;i++) {

            for (int j = 6;j < 9;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }


        }
        if (check(push)) {
            return false;
        }
        push.clear();
        for (int i = 3;i < 6;i++) {

            for (int j = 6;j < 9;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }


        }
        if (check(push)) {
            return false;
        }
        push.clear();
        for (int i = 6;i < 9;i++) {

            for (int j = 6;j < 9;j++) {
                if (b[i][j] == '.') {
                    continue;
                }
                else {
                    push.push_back(b[i][j] - '0');
                }
            }

        }
        if (check(push)) {
            return false;
        }

        return true;
    }
};

int main() {
    Solution solution;

    // Example Sudoku board
    vector<vector<char>> board = {
    {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
    {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
    {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
    {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
    {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
    {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
    {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
    {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
    {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };


    bool isValid = solution.isValidSudoku(board);

    if (isValid) {
        cout << "The Sudoku board is valid." << endl;
    }
    else {
        cout << "The Sudoku board is invalid." << endl;
    }

    return 0;
}
