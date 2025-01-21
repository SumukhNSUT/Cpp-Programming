#include <iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* convertArrayToLL(vector<int> arr, Node* head) {

    Node* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

Node* removeK(Node* head, int k) {
    if (head == NULL) return head;
    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete(temp);
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        cnt++;
        if (cnt == k) {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
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
    vector<int> arr = { 3, 6, 7, 8, 9, 2, 3, 4, 2, 4 };
    Node* head = new Node(arr[0]);
    convertArrayToLL(arr, head);
    print(head);
    cout << endl;
    head = removeK(head, 2);
    print(head);
    return 0;
}