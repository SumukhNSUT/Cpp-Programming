// two ways to implement stack
// way1: using arrays
// way2: using linked list

#include<iostream>
using namespace std;

class Stack {
public:
    // properties
    int* arr;
    int top;
    int size;
    // constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        // dynamically allocated memory for array of size 'size' which is pointed by
        // pointer arr 
        // elements of array are of type int and square brackets around'size'
        // indicate that type is array
        top = -1;
    }


    // to push element in stack
    void push(int element) {
        // if size-top >=1, that means ateast one empty space in stack
        if (size - top > 1) {
            top++;
            arr[top] = element;

        }
        else {
            cout << "Stack Overflow\n";
        }

    }
    void pop() {
        if (top >= 0) {
            top--;
        }
        else {
            cout << "Stack Underflow\n";
        }

    }
    int peek() {
        if (top >= 0 && top < size) {
            return arr[top];
        }
        else {
            cout << "Stack is empty\n";
            return -1;
        }

    }
    bool isEmpty() {
        if (top < 0) {
            return true;
        }
        return false;
    }
};
int main() {
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(56);

    s.pop();

    cout << "Top is: " << s.peek() << endl;
    if (s.isEmpty()) {
        cout << "Stack is empty\n";
    }
    else {
        cout << "Stack is not empty\n";
    }

    return 0;
}
