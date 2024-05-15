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
Node *head = NULL;
int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}