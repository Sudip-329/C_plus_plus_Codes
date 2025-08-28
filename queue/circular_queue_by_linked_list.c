#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
}*front = NULL,*rear = NULL;

void enqueue(int d) //Insereart elements in Queue
{
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = d;
	n->next = NULL;
	if((rear==NULL)&&(front==NULL))
	{
		front = rear = n;
		rear->next = front;//
	}
	else
	{
		rear->next = n;
		rear = n;
		n->next = front;
	}
}
	
	
void dequeue() // Delete an element frontrearom Queue
{
	struct node* ptr;
	ptr = front;
	if((front==NULL)&&(rear==NULL))
		printf("\nQueue is Empty");
	else if(front == rear)
	{
		front = rear = NULL;
		free(ptr);
	}
	else{
		front = front->next;
		rear->next = front;
		free(ptr);
	}
}

void display(){ // display the elements ofront Queue
	struct node* t;
	t = front;
	if((front==NULL)&&(rear==NULL))
		printf("\nQueue is Empty");
	else{
		do
		{
			printf("\n%d",t->data);
			t = t->next;
		}while(t!=front);
		
	}
}


int main()
{
	int opt,n,i,data;
	printf("Enter Your Choice:-");
	do{
		printf("\n\n1 Insereart the Data in Queue\n2 show the Data in Queue \n3  Delete the data in Queue\n0 Exit");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("\nEnter the number of data");
				scanf("%d",&n);
				printf("\nEnter your data");
				i=0;
				while(i<n){
					scanf("%d",&data);
					enqueue(data);
					i++;
				}
				break;
			case 2:
				display();
				break;
			case 3:
				dequeue();
				break;
			case 0:
				break;
			default:
				printf("\nINcorrect Choice");
			
		}
	}while(opt!=0);
return 0;
}