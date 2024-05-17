// delete alternate elements from linked list
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
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
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

void delete_alternate(Node *&head)
{
    Node *curr_node = head;
    while (curr_node != NULL && curr_node->next != NULL)
    {
        Node *temp = curr_node->next; // node to be deleted
        curr_node->next = curr_node->next->next;
        curr_node = curr_node->next;
        delete (temp);
    }
}

int main()
{
    LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.display();
    cout << endl;
    cout << "After deleting alternate nodes:\n";
    delete_alternate(l.head);
    l.display();
    cout << endl;
    return 0;
}