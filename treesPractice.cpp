#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* right;
    node* left;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// function to create a tree
node* buildTree(node* root) {
    cout << "Enter data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1) {
        return NULL;
    }
    cout << "Enter data for inserting in left: " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right :" << endl;
    root->right = buildTree(root->right);
    return root;
}

int main() {
    node* root = NULL;
    root = buildTree(root);
    return 0;
}