// print fibonacci series
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

void print_fib(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << fib(i) << " ";
    }
}

int main()
{
    cout << "Enter n -> ";
    int n;
    cin >> n;

    print_fib(n);
    return 0;
}