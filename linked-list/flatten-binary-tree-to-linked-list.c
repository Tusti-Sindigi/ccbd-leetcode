#include <stdio.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


void preorder(struct TreeNode* root)
{
    if(root->left)
    {
        if(root->left->left)
            preorder(root->left);

        struct TreeNode* temp=root->left;
        while(temp->right)
            temp=temp->right;

        temp->right=root->right;
        root->right=root->left;
        root->left=NULL;
    }
    if(root->right)
        preorder(root->right);
}

void flatten(struct TreeNode* root) 
{
    struct TreeNode* temp=root;   
    if(root)
        preorder(temp);
}