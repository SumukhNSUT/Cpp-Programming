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
    // Traverse to last node
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = new_node; // Last node points to newly added node
    new_node->next = head; // New node points to head
    head = new_node;       // bring head to new node
}

void insert_at_tail(Node *&head, int value)
{
    // If linked list is empty
    if (head == NULL)
    {
        insert_at_head(head, value);
        return;
    }
    Node *new_node = new Node(value);
    Node *temp = head;
    // Traverse to last node
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = new_node; // Last node points to new node
    new_node->next = head; // New node points to head
}

// Function to display linked list
void display(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    Node *head = NULL;

    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_head(head, 0);
    insert_at_head(head, -1);
    insert_at_head(head, -2);
    insert_at_head(head, -3);
    insert_at_head(head, -4);

    display(head);
    return 0;
}
