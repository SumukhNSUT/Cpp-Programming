#include <iostream>
using namespace std;

// Define the structure of a tree node
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    // Constructor
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to insert a new node into the binary tree
TreeNode *insert(TreeNode *root, int value)
{
    if (root == nullptr)
    {
        return new TreeNode(value);
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to perform an inorder traversal of the tree
void inorderTraversal(TreeNode *root)
{
    if (root != nullptr)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main()
{
    // Create an empty tree
    TreeNode *root = nullptr;

    // Insert some nodes into the tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Perform inorder traversal to display the tree
    cout << "Inorder traversal of the tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
