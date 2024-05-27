// take 2-d array as input
// find sum of elements in each row
// find sum of elements in each column
#include <iostream>
using namespace std;
int main() {
    int arr[3][3];
    cout << "Enter 9 elemets of 2-d array:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "Entered array is:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // sum of elements of each row
    for (int i = 0; i < 3; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < 3; j++)
        {
            row_sum = row_sum + arr[i][j];
        }
        cout << "Sum of " << i << " row is: " << row_sum << endl;
    }
    cout << endl;
    // sum of elements of each column
    for (int j = 0; j < 3; j++)
    {
        int col_sum = 0;
        for (int i = 0; i < 3; i++)
        {
            col_sum = col_sum + arr[i][j];
        }
        cout << "Sum of " << j << " column is: " << col_sum << endl;
    }
    cout << endl;
}
