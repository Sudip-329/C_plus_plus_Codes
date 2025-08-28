#include<stdio.h>   //bst is okk 
#include<stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};

struct node* newnode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node,int data)
{
    if(node == NULL)
    return newnode(data);

    if(data<node->data)
    {
        node->left = insert(node->left,data);
    }
    else if(data>node->data)
    {
        node->right = insert(node->right,data);
    }
    return node;
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
    else 
    return;
}

void postorder(struct node *node)
{
    
    if(node!=NULL)
    {
        postorder(node->left);
        postorder(node->right);
        printf(" %d ",node->data);
        
    }
    else 
    return;
}

void inorder(struct node *node)
{
    
    if(node!=NULL)
    {
        inorder(node->left);
        printf(" %d ",node->data);
        inorder(node->right);
    }
    else
    {
    return;
    }
}



//need another function to find the inorder preprocessor
struct node *inorderpredecessor(struct node *root)
{
    root = root->left;
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deletenode(struct node *root,int value)
{
    struct node *ipre;//ipre means inorder predecessor
    if(root == NULL)
    {
        return NULL;
    }
    if(root->left ==NULL && root->right== NULL)
    {
        free(root);
        return NULL;

    }
    //searching for the node
    if(value<root->data) // if tofind value smaller than root then search in left
    {
        deletenode(root->left,value);
    }
    else if(value>root->data)// if tofind is bigger then search in left
    {
        root->right = deletenode(root->right,value);
    }
    //delete strategy when the node is found
    else{
        ipre = inorderpredecessor(root);           //maybe not right
        root->data = ipre->data;
        root->left = deletenode(root->left,ipre->data);
    }
    return root;
}



int main()
{
    int n,x;
    printf("HOw many numbers : ");
    scanf("%d",&n);

    struct node * root = NULL;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(i==0)
        {
            root = insert(root,x);
        }
        else
        {
            insert(root,x);
        }
    }

    printf("Preorder is : \n");
    preorder(root);
    printf("\nPostorder is : \n");
    postorder(root);
    printf("\nInorder is : \n");
    inorder(root);
    int value;
    printf("\n Enter what to delete : ");
    scanf("%d",&value);
    deletenode(root,value);
    inorder(root);
    preorder(root);

    return 0;
}
