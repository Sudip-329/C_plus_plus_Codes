#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
    int data;   
    struct node *next;  
}*front,*rear;  

void insert();  
void delete();  
void display();  


void main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  


void insert()  //enqueue
{  
    struct node *ptr;  
    int item;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter value : \n");  
        scanf("%d",&item);  
        ptr -> data = item;    //storing data
        if(front == NULL)  //if front is null then front will be the new node 
        {  
            front = ptr;  //in queue front and rear stays in same place at begining
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   //if there was node present then rear was on last position. rear next was null ,now it 
        {       //will hold ptr;
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}  


void delete ()  
{  
    struct node *ptr;  
    if(front == NULL)  //no element present then nothing to delete
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> next;  
        free(ptr);  
    }  
} 


void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        while(ptr != NULL)   
        {  
            printf("%d -> ",ptr -> data);  
            ptr = ptr -> next;  
        }  
    }  
}