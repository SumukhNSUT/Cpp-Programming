// tree:
// 1 
// 3 5 
// 7 11 17 

// tree can be written as: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
#include<iostream>
#include<queue>
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
// bfs traversal of binary tree
void levelOrderTraversal(node* root) {
    // bfs
    // breadth first search
    queue < node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            // purana level complete traverse ho chuka hai 
            cout << endl;
            if (!q.empty()) {
                // queue still has some child nodes
                q.push(NULL);
            }
        }

        else {
            cout << temp->data << " ";
            if (temp->left != NULL) {
                q.push(temp->left);
            }
            if (temp->right != NULL) {
                q.push(temp->right);
            }

        }
    }
}

int main() {
    node* root = NULL;

    // creating a tree
    // tree: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // -1 refers to NULL
    root = buildTree(root);

    // level order traversal
    // or bfs/ breadth first search
    cout << "Printing the level order traversal of binary tree or bfs traversal: " << endl;
    levelOrderTraversal(root);

    return 0;
}