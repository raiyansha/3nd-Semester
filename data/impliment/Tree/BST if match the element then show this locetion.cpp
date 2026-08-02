/* write a program to insert an element in a binary search tree;
 if the element already inserted before then display the location.*/
#include <iostream>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert an element into a binary search tree
TreeNode* insert(TreeNode* root, int val, bool& alreadyInserted) {
    if (!root) {
        return new TreeNode(val); // Create a new node if the tree is empty or the current node is null
    }

    if (val < root->data) {
        root->left = insert(root->left, val, alreadyInserted);
    } else if (val > root->data) {
        root->right = insert(root->right, val, alreadyInserted);
    } else {
        alreadyInserted = true; // Element already exists in the BST
    }

    return root;
}

// Function to display the location of an element in the BST
void displayLocation(TreeNode* root, int val) {
    if (!root) {
        cout << "Element not found in the BST." << endl;
        return;
    }

    if (val == root->data) {
        cout << "Element " << val << " found at the current node." << endl;
    } else if (val < root->data) {
        cout << "Element " << val << " is in the left subtree." << endl;
        displayLocation(root->left, val);
    } else {
        cout << "Element " << val << " is in the right subtree." << endl;
        displayLocation(root->right, val);
    }
}

int main() {
    TreeNode* root = nullptr;
    bool alreadyInserted = false;

    // Insert elements into the binary search tree
    root = insert(root, 30, alreadyInserted);
    root = insert(root, 20, alreadyInserted);
    root = insert(root, 40, alreadyInserted);
    root = insert(root, 10, alreadyInserted);
    root = insert(root, 25, alreadyInserted);

    int elementToInsert;
    cout << "Enter an element to insert: ";
    cin >> elementToInsert;

    root = insert(root, elementToInsert, alreadyInserted);

    if (alreadyInserted) {
        cout << "Element " << elementToInsert << " already inserted." << endl;
    } else {
        cout << "Element " << elementToInsert << " inserted successfully." << endl;
    }

    cout << "Location of the element in the BST:" << endl;
    displayLocation(root, elementToInsert);

    return 0;
}

