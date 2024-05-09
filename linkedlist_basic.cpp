// singly linked list
// all basic operations
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    // Constructor to initialize a node with given value
    Node(int value)
    {
        data = value;
        next = NULL; // Initialize the next pointer to NULL
    }
};

// Function to traverse a linked list and print its elements
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " "; // Print the data of current node
        temp = temp->next;         // Move to the next node
    }
}

// Function to insert a new node with given value at the beginning of the linked list
void insert(Node *&head, int value)
{
    Node *new_node = new Node(value); // Create a new node with given value
    new_node->next = head;            // Make the next of new node as head
    head = new_node;                  // Move the head to point to the new node
}

// Function to display the linked list
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->"; // Print the data of current node
        temp = temp->next;          // Move to the next node
    }
    cout << "NULL" << endl; // Print NULL to signify end of linked list
}

int main()
{
    Node *head = NULL; // Initialize head pointer to NULL initially
    insert(head, 1);   // Insert node with value 1 at the beginning
    display(head);     // Display the linked list after inserting 1
    insert(head, 2);   // Insert node with value 2 at the beginning
    display(head);     // Display the linked list after inserting 2
    insert(head, 3);   // Insert node with value 3 at the beginning
    display(head);     // Display the linked list after inserting 3

    return 0;
}
