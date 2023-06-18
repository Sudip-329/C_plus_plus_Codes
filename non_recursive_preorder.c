#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
    struct node *next, *da;
    
} *root = NULL,*top=NULL;

void create(int value);
void preorder();
void push(struct node * );
struct node* pop();
int main()
{
    create(40);
    create(20);
    create(10);
    create(30);
    create(60);
    create(45);
    create(41);
    create(70);

    preorder();
    printf("\n");

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



struct node* pop()
{
struct node *tempTop = top,*p;
if(tempTop==NULL){
p=NULL;
return p;
}else{
    tempTop = tempTop ->next;
p=top->da;
free(top);
top = tempTop;
return p;
}
}




void push(struct node *p)
{

if (top == NULL)
{
struct node *top1;
top1 =(struct node *)malloc(sizeof(struct node));
top1->next = NULL;
top1->da = p;
top=top1;
}
else
{
struct node * temp =(struct node *)malloc(sizeof(struct node));
temp->next = top;
temp->da = p;
top = temp;
}

}


void preorder(){
        
        struct node *ptr;
        ptr=root;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            if (ptr->right!=NULL)
            {
                push(ptr->right);
            }
            if (ptr->left!=NULL)
            {
                ptr=ptr->left;
            }else 
                ptr=pop();
            
        }
        
}


