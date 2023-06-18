#include<stdio.h>
#include<stdlib.h>
struct node  // node defining for tree
{
	struct node* left;
	struct node* right;
	int data;
}*root=NULL;
struct stack // node defining for stack
{
	struct node* data;
	struct stack* next;
};

void push(struct stack** top,struct node* n); //function declation
struct node* pop(struct stack** top);
int isEmpty(struct stack* top);

int tree_traversal(struct node* root) //preorder Traversing function
{ 
	struct node* temp = root;
	struct stack* s_temp = NULL;
	int flag = 1;
	while(flag) //Loop run untill temp is null and stack is empty
	{
		if(temp){
			printf("%d ",temp->data);
                        push(&s_temp,temp);
			temp = temp->left;
		}
		else{
			if(!isEmpty(s_temp)){
				temp = pop(&s_temp);
				temp = temp->right;
			}
			else
				flag = 0;
		}
	 } 
}
void push(struct stack** top,struct node* n) //push node in stack
{
	struct stack* new_n = (struct stack*)malloc(sizeof(struct stack));
	new_n->data = n;
	new_n->next = (*top);
	(*top) = new_n;
}
int isEmpty(struct stack* top) // check if stack is empty
{
	if(top==NULL)
		return 1;
	else
		return 0;
}
struct node* pop(struct stack** top_n) // pop the node from stack
{
	struct node* item;
	struct stack* top;
	top = *top_n;
	item = top->data;
	*top_n = top->next;
	free(top);
	return item;
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
	tree_traversal(root); 
	return 0;
}