// arvore_binaria.c
#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

TreeNode* newTreeNode(int item) {
    TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(TreeNode* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

void preorder(TreeNode* root) {
    if (root != NULL) {
        printf("%d \n", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(TreeNode* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d \n", root->key);
    }
}

TreeNode* insert(TreeNode* node, int key) {
    if (node == NULL) return newTreeNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

TreeNode* minValueNode(TreeNode* node) {
    TreeNode* current = node;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}

TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == NULL) return root;

    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        TreeNode* temp = minValueNode(root->right);

        root->key = temp->key;

        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

TreeNode* search(TreeNode* root, int key) {
    if (root == NULL || root->key == key)
       return root;

    if (root->key < key)
       return search(root->right, key);

    return search(root->left, key);
}

int minValue(TreeNode* node) {
    TreeNode* current = node;

    while (current->left != NULL) {
        current = current->left;
    }
    return(current->key);
}

int maxValue(TreeNode* node) {
    TreeNode* current = node;

    while (current->right != NULL) {
        current = current->right;
    }
    return(current->key);
}
