// doubly linked list
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// inserting at head function
// before the node
void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
// inserting at tail
// after the node
void insert_at_tail(Node *&head, int value)
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
    new_node->prev = temp;
}
// insert at kth position
void insert_at_position(Node *&head, int pos, int value)
{
    // Handle insertion at the head of the list
    if (pos == 0)
    {
        insert_at_head(head, value);
        return;
    }

    Node *new_node = new Node(value);
    Node *temp = head;

    // Traverse to the node just before the insertion position
    int curr_pos = 0;
    while (temp != NULL && curr_pos != pos - 1)
    {
        temp = temp->next;
        curr_pos++;
    }

    // If the position is out of bounds, insert at the end
    if (temp == NULL || temp->next == NULL)
    {
        insert_at_tail(head, value);
        return;
    }

    // Adjust the pointers to insert the new node
    new_node->next = temp->next;
    new_node->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = new_node;
    }
    temp->next = new_node;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insert_at_head(head, 20);
    insert_at_head(head, 30);
    insert_at_head(head, 40);
    insert_at_head(head, 50);
    insert_at_tail(head, 100);
    insert_at_position(head, 3, 500);

    display(head);
    return 0;
}