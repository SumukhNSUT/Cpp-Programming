// creation of a node
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

int main()
{
    Node *n1 = new Node(10);
    cout << "Data stored in the node: " << n1->data << endl;

    return 0;
}
