// 14. Write a program to implement a stack using a linked list.
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }
    bool isEmpty()
    {
        return top == nullptr;
    }
    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    void pop()
    {
        if (!isEmpty())
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
        else
        {
            cout << "Stack underflow!" << endl;
        }
    }
    int peek()
    {
        if (!isEmpty())
        {
            return top->data;
        }
        else
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }
};
int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    cout << "Top element of the stack: " << stack.peek() << endl;
    stack.pop();
    stack.pop();
    cout << "Top element after popping twice: " << stack.peek() << endl;
    return 0;
}