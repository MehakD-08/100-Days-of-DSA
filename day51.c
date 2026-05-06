#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node {
    int data;
    struct Node *left, *right;
};
struct Node* LCA(struct Node* root, int n1, int n2) {
    while(root != NULL) {
        if(n1 < root->data && n2 < root->data)
            root = root->left;
        else if(n1 > root->data && n2 > root->data)
            root = root->right;
        else
            return root;
    }
    return NULL;
}