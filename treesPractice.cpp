#include <iostream>

using namespace std;

// Definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Class definition for binary tree
class BinaryTree {
public:
    TreeNode* root;

    BinaryTree() : root(nullptr) {}

    // Function to insert a node in the binary tree
    TreeNode* insert(TreeNode* node, int val) {
        if (node == nullptr) {
            return new TreeNode(val);
        }
        if (val < node->val) {
            node->left = insert(node->left, val);
        }
        else {
            node->right = insert(node->right, val);
        }
        return node;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    // Function to perform in-order traversal of the binary tree
    void inOrder(TreeNode* node) const {
        if (node != nullptr) {
            inOrder(node->left);
            cout << node->val << " ";
            inOrder(node->right);
        }
    }

    void inOrder() const {
        inOrder(root);
        cout << endl;
    }

    // Function to perform pre-order traversal of the binary tree
    void preOrder(TreeNode* node) const {
        if (node != nullptr) {
            cout << node->val << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }

    void preOrder() const {
        preOrder(root);
        cout << endl;
    }

    // Function to perform post-order traversal of the binary tree
    void postOrder(TreeNode* node) const {
        if (node != nullptr) {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->val << " ";
        }
    }

    void postOrder() const {
        postOrder(root);
        cout << endl;
    }
};

int main() {
    BinaryTree tree;

    // Insert nodes into the tree
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    // Perform traversals
    cout << "In-order traversal: ";
    tree.inOrder();

    cout << "Pre-order traversal: ";
    tree.preOrder();

    cout << "Post-order traversal: ";
    tree.postOrder();

    return 0;
}