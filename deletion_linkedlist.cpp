// deletion of a node at kth position in a linked list
// case 1: at start
// case 2: at end
// case 3: from middle

// create a linked list 10 20 30 40 50 60
// delete node with value 10(case1)
// delete node with value 60(case2)
// delete node with value 30(case3)
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
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// case1
// delete 10
void delete_at_start(Node *&head)
{
    // deleting 1st node
    Node *temp = head;
    head = head->next; // move head to next node
    // freeing up the 1st node that is to be deleted
    delete temp; // free up memory
    // temp was at node which is deleted
}
// case2
// delete 60
void delete_at_end(Node *&head)
{
    // traverse upto second last node
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
// case3
// delete 30
void delete_at_position(Node *&head, int pos)
{
    if (pos == 0)
    {
        delete_at_start(head);
        return;
    }
    // traverse upto pos-1
    int curr_pos = 0;
    Node *prev = head;
    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }
    // prev is pointing to node at pos-1
    Node *temp = prev->next; // node to be deleted
    prev->next = prev->next->next;
    delete (temp);
    // also free(temp) same as delete(temp)
}
int main()
{
    cout << "Case1: Delete node at starting position(value = 10)\n";
    cout << "Case2: Deleted node at last in new linked list formed after case 1(value = 60)\n";
    cout << "Case3: Delete node at 1st position in new linked list after case 1 and 2(value = 30)\n";
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    Node *n6 = new Node(60);

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = NULL;
    display();
    cout << endl
         << endl;
    cout << "Deleting 1st node(case1):\n";
    delete_at_start(head);
    display();
    cout << endl
         << endl;
    cout << "Deleting last node(case2):\n";
    delete_at_end(head);
    display();
    cout << endl
         << endl;
    cout << "Deleting at position 1st(case3):\n";
    delete_at_position(head, 1);
    display();
    cout << endl
         << endl;

    return 0;
}