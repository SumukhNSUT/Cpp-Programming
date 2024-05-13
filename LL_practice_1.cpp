// create a linked list 0 10 20 30 40 50
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
//  function to insert a node
void insert_node(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

// function to display linked list
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    insert_node(head, 0);
    insert_node(head, 10);
    insert_node(head, 20);
    insert_node(head, 30);
    insert_node(head, 40);
    insert_node(head, 50);
    display();

    return 0;
}
