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
        next = nullptr;
    }
};

Node *head = nullptr; // Global variable for head of the linked list

// Function to add a node before the head
void addBeforeHead(int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

// Function to add a node after the head
void addAfterHead(int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head->next;
        head->next = newNode;
    }
}

// Function to print the linked list
void display()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    addBeforeHead(20);
    addBeforeHead(10);
    addBeforeHead(0);
    display();

    addAfterHead(0);
    addAfterHead(10);
    addAfterHead(20);
    display();

    return 0;
}
