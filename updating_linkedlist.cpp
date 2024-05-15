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
void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void insert_at_tail(Node *&head, int value)
{
    Node *new_node = new Node(value);

    // If the list is empty
    if (head == NULL)
    {
        insert_at_head(head, value);
    }

    // traverse upto last node
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // now temp is at last node
    temp->next = new_node;
}

// to display linked list
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// update the linked list
void update(Node *&head, int value, int pos)
{
    Node *temp = head;
    // traverse to pos
    int current_pos = 0;
    while (temp != NULL && current_pos < pos)
    {
        temp = temp->next;
        current_pos++;
    }
    temp->data = value;
}

int main()
{
    insert_at_head(head, 10);
    insert_at_tail(head, 20);
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);
    display();

    cout << endl
         << endl;

    update(head, 100, 2);
    display();
    return 0;
}