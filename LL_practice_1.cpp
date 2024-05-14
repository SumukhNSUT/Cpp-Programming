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

// Function to insert a node at head
void insert_node_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

// Function to insert a node at tail
void insert_node_at_tail(Node *&head, int value)
{
    Node *new_node = new Node(value);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

// Function to display linked list
void display(Node *head)
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
    Node *head1 = NULL; // for list 0 10 20 30 40 50
    Node *head2 = NULL; // for list 50 40 30 20 10 0

    // creating 0 10 20 30 40 50
    insert_node_at_tail(head1, 0);
    insert_node_at_tail(head1, 10);
    insert_node_at_tail(head1, 20);
    insert_node_at_tail(head1, 30);
    insert_node_at_tail(head1, 40);
    insert_node_at_tail(head1, 50);
    display(head1);

    cout << endl
         << endl;

    // creating 50 40 30 20 10 0
    insert_node_at_head(head2, 0);
    insert_node_at_head(head2, 10);
    insert_node_at_head(head2, 20);
    insert_node_at_head(head2, 30);
    insert_node_at_head(head2, 40);
    insert_node_at_head(head2, 50);
    display(head2);

    cout << endl
         << endl;

    return 0;
}
