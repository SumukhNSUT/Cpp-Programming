#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    // constructor
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

// function to add a node
void insert_at_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

// function to print the linked list
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl; // indicate the end of the list
}

int main()
{
    Node *head = NULL;
    insert_at_head(head, 1);
    cout << "After inserting 1: ";
    display(head);

    insert_at_head(head, 2);
    cout << "After inserting 2: ";
    display(head);

    return 0;
}
