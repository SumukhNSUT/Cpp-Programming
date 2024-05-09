// traversal of a linked list
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int value)
    {
        value = data;
        next = NULL;
    }
};

// function to traverse a linked list
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    // creating first node
    Node *n1 = new Node(10);

    return 0;
}