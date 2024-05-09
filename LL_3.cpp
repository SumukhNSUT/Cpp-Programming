// Adding new nodes to a linked list
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
        data = value;
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
// inserting at before 1st node
void insert(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
};
// function to display linked list
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head = NULL;
    insert(head, 1);
    display(head);
    insert(head, 2);
    display(head);
    insert(head, 3);
    display(head);

    return 0;
}