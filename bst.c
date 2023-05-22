#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root, int k)
{
    if(root == NULL) 
        return NULL;
    if(k == root-> key) 
        return root->key;
    if(k < root-> key)
      return (root->left);
    if(k > root->key)
      return (root-> right);
}

struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}
int main()
{
    struct node *root = NULL;
    int k = 12,num;
    root = insert(root, k);
    printf("Inorder traversal: ");
    inorder(root, k);
    getch();
}