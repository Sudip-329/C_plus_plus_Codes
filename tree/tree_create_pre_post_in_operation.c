#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int info)
{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data=info;
    new->left = NULL;
    new->right = NULL;
    return(new);
}

void preorder(struct node* node)              //                           1
{                                             //                  2                    3
                                              //            4          5          6         7
    if(node!=NULL)                            //         8    9     10   11    12   13   14   15
    {         
        printf(" %d ",node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

void postorder(struct node *node)
{
    
    if(node!=NULL)
    {
        postorder(node->left);
        postorder(node->right);
        printf(" %d ",node->data);
        
    }
}

void inorder(struct node *node)
{
    
    if(node!=NULL)
    {
        inorder(node->left);
        printf(" %d ",node->data);
        inorder(node->right);
    }
}

int main()
{
    struct node* root = create(1);
    root->left = create(2);
    root->right = create(3);
    root->left->left = create(4);
    root->left->right = create(5);
    root->right->left = create(6);
    root->left->left->left = create(8);
    root->left->left->right = create(9);
    root->left->right->left = create(10);
    root->left->right->right = create(11);
    root->right->left->left = create(12);
    root->right->left->right = create(13);
    root->right->right=create(7);
    root->right->right->left = create(14);
    root->right->right->right = create(15);

    printf("Preorder is : \n");
    preorder(root);
    printf("\nPostorder is : \n");
    postorder(root);
    printf("\nInorder is : \n");
    inorder(root);

}