#include <stdio.h>
#include <stdlib.h>
    static int c=0;
    static int c0=0,c1=0,c2=0;
struct node
{
    int data;
    struct node *left, *right;

} *root = NULL;
void create(int value);
void inorder(struct node *);
void preorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);

int main()
{
    create(5);
    create(4);
    create(9);
    create(7);
    create(8);
    create(6);
    create(3);
    create(2);

    inorder(root);
    printf("\n");
    preorder(root);
            printf("C= %d \n",c);
            printf("C0= %d \n",c0);
            printf("C1= %d \n",c1);
            printf("C2= %d \n",c2);
    postorder(root);
}

void create(int val)
{
    struct node *new, *parent, *node;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = val;
    new->left = NULL;
    new->right = NULL;
    node = root;
    parent = NULL;
    if (root == NULL)
    {
        root = new;
    }
    else
    {
        while (node != NULL)
        {
            parent = node;
            if (val < node->data)
                node = node->left;
            else
                node = node->right;
        }
        if (val < parent->data)
        {
            parent->left = new;
        }
        else
            parent->right = new;
    }
}

void inorder(struct node *node)
{
        if (node!=NULL)
        { 
            c++;
            if(node->left!=NULL && node->right!=NULL)c2++;
            else if(node->right==NULL && node->left==NULL) c0++;
            else c1++;
            inorder(node->left);
            printf("%d ",node->data);
            inorder(node->right);

        }else{
            return;
        }
}


void preorder(struct node *node){
        if (node!=NULL)
        {
            printf("%d ",node->data);
            preorder(node->left);
            preorder(node->right);
        }else
        return;
        
}
void postorder(struct node *node){
        if (node!=NULL)
        {
            postorder(node->left);
            postorder(node->right);
            printf("%d ",node->data);
        }else
        return;
        
}