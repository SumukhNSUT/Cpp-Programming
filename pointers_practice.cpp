#include <iostream>
using namespace std;
int main()
{
     int arr[4] = {1, 2, 3, 4};
     cout << "Value at 0th index is: " << *(arr) << endl;
     cout << "Value at 0th index is: " << *(&arr[0]) << endl;
     cout << "Value at 0th index is: " << arr[0] << endl;
     cout << "Address of 0th index is: " << &arr[0] << endl;

     cout << endl
          << endl;

     cout << "Value at 1st index is: " << *(arr + 1) << endl;
     cout << "Value at 1st index is: " << arr[1] << endl;
     cout << "Address of 1st index is: " << &arr[1] << endl;

     cout << endl
          << endl;

     cout << "Value at 2nd index is: " << *(arr + 2) << endl;
     cout << "Value at 2nd index is: " << arr[2] << endl;
     cout << "Address of 2nd index is: " << &arr[2] << endl;
     return 0;
}