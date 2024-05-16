// delete alternate nodes from a linked list
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

void delete_at_start(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

void delete_at_position(Node *&head, int pos)
{
    if (pos == 0)
    {
        delete_at_start(head);
        return;
    }

    int curr_pos = 0;
    Node *prev = head;
    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }

    Node *temp = prev->next;
    prev->next = prev->next->next;
    delete temp;
}

void display()
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
    Node *n0 = new Node(0);
    head = n0;
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    cout << "Initial linked list:\n";
    display();
    cout << endl
         << endl;

    cout << "After deletion of alternate elements:\n";

    Node *temp = head;
    int pos = 0;
    while (temp != NULL && temp->next != NULL)
    {
        cout << "Deleting position: " << pos + 1 << endl;
        delete_at_position(head, pos + 1);
        display();
        cout << endl;
        temp = temp->next->next;
        pos += 2;
    }

    cout << endl;
    return 0;
}
