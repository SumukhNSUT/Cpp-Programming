
// // FACTORIAL OF A NUMBER
// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter value of n: ";
//     cin >> n;

//     cout << "The factorial of n is: " << factorial(n) << endl;
//     return 0;
// }

// // POWER OF 2
// #include <iostream>
// using namespace std;

// int power_of_2(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 2 * power_of_2(n - 1);
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter power of 2: ";
//     cin >> n;

//     cout << "The value of 2 power " << n << " is: "
//          << power_of_2(n);
//     return 0;
// }

// // PRINT COUNTING
// #include <iostream>
// using namespace std;

// void print_counting(int n)
// {
//     cout << n << endl;

//     if (n == 0)
//     {
//         return; // base case, exit the function
//     }
//     print_counting(n - 1); // recursive call
// }

// int main()
// {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     cout << endl;

//     print_counting(n);

//     return 0;
// }
