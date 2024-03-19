// Print 1 to n using recursion
#include <iostream>
using namespace std;

void print(int i, int n)
{

    if (i > n)
    {
        return;
    }
    else
    {
        cout << i << endl;
        print(i + 1, n);
    }
}

// reverse order
void printCounting(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n;
        printCounting(n - 1);
    }
}
// sum of first n numbers
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    print(1, 5);

    printCounting(5);
    cout << endl;

    int x = sum(5);
    cout << x << endl;

    return 0;
}
