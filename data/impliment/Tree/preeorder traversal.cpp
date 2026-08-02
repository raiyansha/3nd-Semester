#include <iostream>

class TreeNode {
public:
    char data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void preorderTraversal(TreeNode* root) {
    if (root == nullptr)
        return;

    std::cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {
    TreeNode* root = nullptr;

    // Build the binary tree based on user input
    char value;
    std::cout << "Enter root value: ";
    std::cin >> value;
    root = new TreeNode(value);

    std::cout << "Enter 'L' for left child, 'R' for right child, and '0' to stop:\n";

    char direction;
    TreeNode* current = root;
    while (std::cin >> direction && direction != '0') {
        std::cout << "Enter value: ";
        std::cin >> value;
        if (direction == 'L') {
            current->left = new TreeNode(value);
            current = current->left;
        } else if (direction == 'R') {
            current->right = new TreeNode(value);
            current = current->right;
        }
    }

    std::cout << "Preorder traversal: ";
    preorderTraversal(root);
    std::cout << std::endl;

    return 0;
}

