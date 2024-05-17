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

class LinkedList
{
public:
    Node *head = NULL;
    // LinkedList()
    // {
    //     head = NULL;
    // }
    // inserting at tail
    void insert(int value)
    {
        if (head == NULL)
        {
            Node *new_node = new Node(value);
            head = new_node;
            return;
        }
        Node *new_node = new Node(value);
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.display();

    return 0;
}