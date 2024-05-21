// circular linked list
// same as singly linked list, just the last node points to 1st node instead of NULL
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
void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    if (head == NULL)
    {
        new_node->next = new_node;
        head = new_node;
        return;
    }
    Node *temp = head;
    // traverse to last node
    // last node points to newly added node in start
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = new_node; // last node points to newly added node
    new_node->next = head; // new node points to head
    head = new_node;       // bring head to new node
}
void insert_at_tail(Node *&head, int value)
{
    // if linked list empty
    if (head == NULL)
    {
        insert_at_head(head, value);
    }
    Node *new_node = new Node(value);
    Node *temp = head;
    // traverse to last node
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
}

int main()
{

    return 0;
}