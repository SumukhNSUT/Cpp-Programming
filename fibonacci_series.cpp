// FIBONACCI SERIES
#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number recursively
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series up to a given n
void printFibonacciSeries(int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms: ";
    printFibonacciSeries(n);

    return 0;
}