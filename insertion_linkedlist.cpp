// inserting node at nth position in a linked list
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

// creating a linked list
Node *head = NULL;
void insert(Node *&head, int data)
{

    Node *new_node = new Node(data);
    new_node->next = head;
    head = new_node;
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

// inserting at nth position in a linked list
void insert_at_position(Node *&head, int data, int n)
{
    Node *new_node = new Node(data);

    // if inserting at the beginning
    if (n == 1)
    {
        new_node->next = head;
        head = new_node;
        return;
    }

    // traverse up to n-1 position
    Node *temp = head;
    int count = 1;
    while (temp != NULL && count < n - 1)
    {
        temp = temp->next;
        count++;
    }

    // If position is out of bounds
    if (temp == nullptr)
    {
        cout << "Position out of bounds!" << endl;
        return;
    }

    // Insert the new node
    new_node->next = temp->next;
    temp->next = new_node;
}

int main()
{
    insert(head, 0);
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    display();

    cout << endl
         << endl;

    insert_at_position(head, 100, 2);
    display();

    return 0;
}