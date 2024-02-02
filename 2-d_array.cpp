#include <iostream>
using namespace std;
int main()
{
    /*  int arr[2][2];
      cout << "Enter 4 elements:\n";
      for (int i = 0; i < 2; i++) // row
      {
          for (int j = 0; j < 2; j++) // column
          {
              cin >> arr[i][j];
          }
      }
      cout << "2-D Array is:\n";
      for (int i = 0; i < 2; i++) // row
      {
          for (int j = 0; j < 2; j++) // column
          {
              cout << arr[i][j] << " ";
          }
          cout << endl;
      }
      */
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // 2 rows and 3 columns
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
