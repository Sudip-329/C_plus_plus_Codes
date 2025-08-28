#include<stdio.h>
int rear = -1;
int front = -1;
int n;
int a[100];

int enqueue()
{
    int i;
    printf("enter size");
    scanf("%d",&n);
    int x=n;
    for(i=0; i<n; i++)
    {
        if(rear==x-1)    // start from 0 so last position x-1  and x holding number of data wiil be inserrt
        {
            printf("full");
        }
        else
        {
            printf("Enter data : ");
            scanf("%d",&a[rear++]);
        }
    }
}

int dequeue()
{
    if(front==rear)
        {
            printf("\n Queue is empty");
        }
        else
        {
            printf("\n Deleted Element is %d\n",a[front++]); // front goes to next pos and data deleted
            //n++;
        }  
}

int display()
{
    for(int i =front; i<rear; i++)
    {
        printf("%d\n",a[i]);
    }
}

int main()
{
    enqueue();
    dequeue();
    display();
    dequeue();
}



/*#include<stdio.h>   //by sdwitch statement  
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;


    printf("Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                //x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
    return 0;
}*/
