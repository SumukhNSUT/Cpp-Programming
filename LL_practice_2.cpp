// make a linked list 40 30 20 10 and then make it 40 15 30 20 10 by inserting 15
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
// creating a head pointer, pointing NULL
Node *head = NULL;
void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void insert_at_position(Node *&head, int value, int pos)
{
    // inserting at starting
    if (pos == 0)
    {
        insert_at_head(head, value);
        return;
    }
    // when pos > 0
    Node *new_node = new Node(value);
    // traverse upto pos-1
    Node *temp = head;
    int current_pos = 0;
    while (temp != NULL && current_pos < pos - 1)
    {
        temp = temp->next;
    }
    // now temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
}

// function to print linked list
void display()
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
    insert_at_head(head, 10);
    insert_at_head(head, 20);
    insert_at_head(head, 30);
    insert_at_head(head, 40);
    display();

    cout << endl
         << endl;
    cout << "After addition of 15 at 1st position:\n";

    insert_at_position(head, 15, 1);
    display();

    return 0;
}