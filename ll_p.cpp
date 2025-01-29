#include<iostream>
#include<vector>
using namespace std;
class node {
public:
    int data;
    node* next;

public:
    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }
};
node* convert2ll(vector<int>& arr) {
    node* head = new node(arr[0], nullptr);
    node* mover = head;
    for (int i = 1;i < arr.size();i++) {
        node* temp = new node(arr[i], nullptr);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
};
int main() {
    vector<int> arr = { 12,2,3,4,5 };
    node* head = convert2ll(arr);
    int target = 122;
    node* ptr = head;
    while (ptr != nullptr) {
        if (ptr->data == target) {
            cout << "1";
            return 0;
        }
        ptr = ptr->next;
    }
    cout << "2";
}