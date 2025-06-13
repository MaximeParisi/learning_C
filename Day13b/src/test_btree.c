#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int value;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* createNode(int value){
    struct TreeNode* root = malloc(sizeof(struct TreeNode));
    if(root == NULL){
        perror("create node failed ! (malloc)");
    }
    root->value = value;
    root->left = NULL;
    root->right = NULL;

    return root;
}

struct TreeNode* insert(struct TreeNode* root, int value){
    
    if(root == NULL){
        return createNode(value);
    }
    if(value < root->value){
        root->left = insert(root->left, value);
    }else{
        root->right = insert(root->right, value);
    }

    return root;
}

void traverse(struct TreeNode* root){
    if(root == NULL){
        return;
    }

    traverse(root->left);
    printf(" %d " , root->value);
    traverse(root->right);

}

int main(int argc, char const *argv[])
{
    struct TreeNode* root = NULL;
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 4);
    root = insert(root, 10);
    root = insert(root, 2);

    printf("in-order traversal");

    traverse(root);
    printf("\n");


    return 0;
}
