#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct TreeNode {
    int value;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Function to create a new tree node
struct TreeNode* createNode(int value) {
    struct TreeNode *newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node in the binary tree
struct TreeNode* insertNode(struct TreeNode *node, int value) {
    // If the tree is empty, return a new node
    if (node == NULL) return createNode(value);

    // Otherwise, recur down the tree
    if (value < node->value)
        node->left = insertNode(node->left, value);
    else if (value > node->value)
        node->right = insertNode(node->right, value);

    // Return the (unchanged) node pointer
    return node;
}

// Function to print the binary tree in in-order traversal
void inOrderTraversal(struct TreeNode *root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->value);
        inOrderTraversal(root->right);
    }
}

// Main function to demonstrate tree operations
int main() {
    struct TreeNode *root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    // Print in-order traversal of the binary tree
    printf("In-order traversal of the binary tree is: \n");
    inOrderTraversal(root);

    return 0;
}
