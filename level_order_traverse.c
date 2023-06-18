// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *left, *right;
//     struct node *next;
//     int da;
    
// } *root = NULL,*top=NULL;

// void create(int value);
// void preorder();
// void push(int );
// void pop(int *);
// int main()
// {
//     create(40);
//     create(20);
//     create(10);
//     create(30);
//     create(60);
//     create(45);
//     create(41);
//     create(70);

//     preorder();
//     printf("\n");

// }



// void create(int val)
// {
//     struct node *new, *parent, *node;
//     new = (struct node *)malloc(sizeof(struct node));
//     new->data = val;
//     new->left = NULL;
//     new->right = NULL;
//     node = root;
//     parent = NULL;
//     if (root == NULL)
//     {
//         root = new;
//     }
//     else
//     {
//         while (node != NULL)
//         {
//             parent = node;
//             if (val < node->data)
//                 node = node->left;
//             else
//                 node = node->right;
//         }
//         if (val < parent->data)
//         {
//             parent->left = new;
//         }
//         else
//             parent->right = new;
//     }
// }



// void pop(int *p)
// {
// struct node *tempTop = top;
// if(tempTop==NULL){
// return;
// }else{
//     tempTop = tempTop ->next;
// *p=top->da;
// free(top);
// top = tempTop;
// }
// }




// void push(int p)
// {

// if (top == NULL)
// {
// top =(struct node *)malloc(sizeof(struct node));
// top->next = NULL;
// top->da = p;
// }
// else
// {
// struct node * temp =(struct node *)malloc(sizeof(struct node));
// temp->next = top;
// temp->da = p;
// top = temp;
// }

// }


// void preorder(){
        
//         struct node *ptr,*t;
//         int p,q;
//         ptr=root;
//         while(ptr!=NULL)
//         {
//             if (ptr->right!=NULL)
//             {
//                 push(ptr->data);
//             }
//             if (ptr->left!=NULL)
//             {
//                 ptr=ptr->left;
//             }
            
//         }
//         t=top;
//         while (t!=NULL)
//         {
//             pop(&q);
//             printf("%d ",q);
//             t=t->next;
//         }
        
        
// }




// Iterative Queue based C program
// to do level order traversal
// of Binary Tree

#include <stdio.h>
#include <stdlib.h>
#define MAX_Q_SIZE 500

/* A binary tree node has data,
pointer to left child
and a pointer to right child */

struct node {
	int data;
	struct node* left;
	struct node* right;
};

/* frunction prototypes */
struct node** createQueue(int*, int*);
void enQueue(struct node**, int*, struct node*);
struct node* deQueue(struct node**, int*);

/* Given a binary tree, print its nodes in level order
using array for implementing queue */
void printLevelOrder(struct node* root)
{
	int rear, front;
	struct node** queue = createQueue(&front, &rear);
	struct node* temp_node = root;

	while (temp_node){
		printf("%d ", temp_node->data);

		/*Enqueue left child */
		if (temp_node->left)
			enQueue(queue, &rear, temp_node->left);

		/*Enqueue right child */
		if (temp_node->right)
			enQueue(queue, &rear, temp_node->right);

		/*Dequeue node and make it temp_node*/
		temp_node = deQueue(queue, &front);
	}
}

/*UTILITY FUNCTIONS*/
struct node** createQueue(int* front, int* rear)
{
	struct node** queue = (struct node**)malloc(
		sizeof(struct node*) * MAX_Q_SIZE);

	*front = *rear = 0;
	return queue;
}

void enQueue(struct node** queue, int* rear,
			struct node* new_node)
{
	queue[*rear] = new_node;
	(*rear)++;
}

struct node* deQueue(struct node** queue, int* front)
{
	(*front)++;
	return queue[*front - 1];
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newNode(int data){

	struct node* node= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

/* Driver program to test above functions*/


int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	printf("Level Order traversal of binary tree is \n");
	printLevelOrder(root);

	return 0;
}
