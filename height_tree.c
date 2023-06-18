#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct node {
	int data;
	struct node *left, *right;
}*root=NULL;


int height(struct node* node)
{
	if (node == NULL)
		return 0;
	else {
        return fmax(height(node->left),height(node->right))+1;
	}
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
    int p=height(root);
    printf("Height of tree is :- %d",p);
	return 0;
}
