#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

// Function to get precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to check if character is an operator
bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Function to check if character is a letter or digit
bool isOperand(char c)
{
    return isalpha(c) || isdigit(c);
}

// Function to convert infix expression to prefix expression
string infixToPrefix(string infix_expr)
{
    // Reverse the expression
    reverse(infix_expr.begin(), infix_expr.end());

    stack<char> stack;
    string result = "";

    for (char &c : infix_expr)
    {
        if (isOperand(c))
        {
            result += c;
        }
        else if (c == ')')
        {
            stack.push(c);
        }
        else if (c == '(')
        {
            while (!stack.empty() && stack.top() != ')')
            {
                result += stack.top();
                stack.pop();
            }
            stack.pop(); // Pop the '('
        }
        else if (isOperator(c))
        {
            while (!stack.empty() && precedence(stack.top()) >= precedence(c))
            {
                result += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }

    while (!stack.empty())
    {
        result += stack.top();
        stack.pop();
    }

    // Reverse the result to get the prefix expression
    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    string infix_expression = "(A+B)*(C-D)";
    string prefix_expression = infixToPrefix(infix_expression);
    cout << "Prefix expression: " << prefix_expression << endl;

    return 0;
}
