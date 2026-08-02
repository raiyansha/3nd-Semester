#include <iostream>

struct TreeNode {
    int key;
    TreeNode* left;
    TreeNode* right;
    TreeNode* parent;

    TreeNode(int val) : key(val), left(nullptr), right(nullptr), parent(nullptr) {}
};

class BinarySearchTree {
private:
    TreeNode* root;

    // Helper function to find the node with the given key in the tree.
    TreeNode* search(TreeNode* node, int key) {
        if (node == nullptr || node->key == key)
            return node;

        if (key < node->key)
            return search(node->left, key);
        else
            return search(node->right, key);
    }

    // Helper function to find the minimum node in a subtree rooted at the given node.
    TreeNode* minimum(TreeNode* node) {
        while (node->left != nullptr)
            node = node->left;
        return node;
    }

public:
    BinarySearchTree() : root(nullptr) {}

    // Function to insert a new key into the binary search tree.
    void insert(int key) {
        TreeNode* new_node = new TreeNode(key);

        if (root == nullptr) {
            root = new_node;
        } else {
            TreeNode* current = root;
            TreeNode* parent = nullptr;

            while (current != nullptr) {
                parent = current;
                if (key < current->key)
                    current = current->left;
                else
                    current = current->right;
            }

            new_node->parent = parent;
            if (key < parent->key)
                parent->left = new_node;
            else
                parent->right = new_node;
        }
    }

    // Function to delete a node with the given key from the binary search tree.
    void remove(int key) {
        TreeNode* node_to_delete = search(root, key);

        if (node_to_delete == nullptr)
            return; // Key not found in the tree.

        if (node_to_delete->left == nullptr) {
            transplant(node_to_delete, node_to_delete->right);
        } else if (node_to_delete->right == nullptr) {
            transplant(node_to_delete, node_to_delete->left);
        } else {
            TreeNode* successor = minimum(node_to_delete->right);

            // If the successor is not the right child of the node_to_delete,
            // then we need to transplant the successor to its right subtree.
            if (successor->parent != node_to_delete) {
                transplant(successor, successor->right);
                successor->right = node_to_delete->right;
                node_to_delete->right->parent = successor;
            }

            transplant(node_to_delete, successor);
            successor->left = node_to_delete->left;
            node_to_delete->left->parent = successor;
        }

        delete node_to_delete;
    }

    // Function to perform the transplant operation, replacing one node with another.
    void transplant(TreeNode* old_node, TreeNode* new_node) {
        if (old_node->parent == nullptr) {
            root = new_node;
        } else if (old_node == old_node->parent->left) {
            old_node->parent->left = new_node;
        } else {
            old_node->parent->right = new_node;
        }

        if (new_node != nullptr) {
            new_node->parent = old_node->parent;
        }
    }

    // Function to perform an in-order traversal of the binary search tree.
    void inorderTraversal(TreeNode* node) {
        if (node == nullptr)
            return;

        inorderTraversal(node->left);
        std::cout << node->key << " ";
        inorderTraversal(node->right);
    }

    void inorder() {
        inorderTraversal(root);
    }
};

int main() {
    BinarySearchTree bst;

    // Insert some nodes into the binary search tree.
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    std::cout << "In-order traversal before deletion: ";
    bst.inorder();
    std::cout << std::endl;

    // Remove a node from the binary search tree.
    bst.remove(30);

    std::cout << "In-order traversal after deletion: ";
    bst.inorder();
    std::cout << std::endl;

    return 0;
}
