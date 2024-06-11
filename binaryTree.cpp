// creation of a tree
// tree:
// 1 
// 3 5 
// 7 11 17 

// tree can be written as: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1) {
        return NULL;
    }
    cout << "Enter data for inserting in left: " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right: " << endl;
    root->right = buildTree(root->right);
    return root;

}

int main() {
    node* root = NULL;
    root = buildTree(root);
    return 0;
}