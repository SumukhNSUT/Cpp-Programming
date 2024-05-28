#include <iostream>
#include <stack>
using namespace std;

stack<int> reverse(stack<int> st) {
    stack<int> rev; // reversed stack
    while (!st.empty()) {
        rev.push(st.top());
        st.pop();
    }
    return rev;
}

int main() {
    stack<int> st;
    for (int i = 1; i <= 5; i++) {
        st.push(i);
    }
    // now stack is 1 2 3 4 5 with 5 being the top element
    stack<int> ans = reverse(st);

    // Print the reversed stack
    while (!ans.empty()) {
        cout << ans.top() << endl;
        ans.pop();
    }
    return 0;
}
