// by using stl
#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    s.empty(); // true/false
    s.top(); // return top element

    return 0;
}