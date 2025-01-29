#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node* insert(Node*& head, int val) {
    Node* new_node = new Node(val);
    if (head == NULL) {
        head = new_node;
    }
    else {
        // when list is not empty
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    return head;
}


void print(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* new_node = new Node(10);
    Node* head = new_node;
    // cout << head->data << endl;
    // cout << head->next << " " << head->prev << endl;

    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);

    print(head);

    return 0;
}
