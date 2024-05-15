// deletion of a node at kth position in a linked list
// case 1: at start
// case 2: at end
// case 3: from middle

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
        next = NULL;
    }
};

int main()
{
    Node *n1 = new Node(10);
    

    return 0;
}