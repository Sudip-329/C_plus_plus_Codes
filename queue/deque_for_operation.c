#include <stdio.h>    
#define size 5  
int deque[size];    
int f = -1, r = -1;   

//  insert_front function will insert the value from the front    
void insert_front(int x)    
{    
    if((f==0 && r==size-1) || (f==r+1))   //overflow condition 
    {    
        printf("Overflow");    
    }    
    else if((f==-1) && (r==-1))    //first position
    {    
        f=r=0;    
        deque[f]=x;    
    }    
    else if(f==0)    //first position has data so insert at last as inserting from front
    {    
        f=size-1;    
        deque[f]=x;    
    }    
    else  //when f goes last then come back means f-1  
    {    
        f=f-1;    
        deque[f]=x;    
    }    
}    
    
// insert_rear function will insert the value from the rear    
void insert_rear(int x)    
{    
    if((f==0 && r==size-1) || (f==r+1))    // f==r+1 means f is after r
    {    
        printf("Overflow");    
    }    
    else if((f==-1) && (r==-1))    // first element
    {    
        f=r=0;    
        deque[r]=x;    
    }    
    else if(r==size-1)    //r is on last so add on 0 position
    {    
        r=0;    
        deque[r]=x;    
    }    
    else    
    {    
        r++; // or    r = r+1   to add after r increment
        deque[r]=x;    
    }    
    
}    
    
// display function prints all the value of deque.    
void display()    
{    
    int i=f;    
    printf("\nElements in a deque are: ");    
        
    while(i!=r)    //means front != rear    before rare will print everything
    {    
        printf("%d ",deque[i]);    
        i=(i+1)%size;    
    }    
    printf("%d",deque[r]);    //to print the rear
}    
    
// getfront function retrieves the first value of the deque.    
void getfront()    //jus f menas first value
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at front is: %d", deque[f]);    
    }    
        
}    
    
// getrear function retrieves the last value of the deque.    
void getrear()    //just r;
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at rear is %d", deque[r]);    
    }    
        
}    
    
// delete_front() function deletes the element from the front    
void delete_front()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(f==r)    //same position means first elememnt
    {    
        printf("\nThe deleted element is %d", deque[f]);    
        f=-1;    
        r=-1;    
            
    }    
    else if(f==(size-1))    //f now 2nd position as 0 position exists
    {    
        printf("\nThe deleted element is %d", deque[f]);    
        f=0;    
    }    
    else    
    {    
        printf("\nThe deleted element is %d", deque[f]);    
        f=f+1;    //if f on 4 then f goes 5 and 4rth position data deleted
    }    
}    
    
// delete_rear() function deletes the element from the rear    
void delete_rear()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(f==r)    
    {    
        printf("\nThe deleted element is %d", deque[r]);    
        f=-1;    
        r=-1;    
            
    }    
     else if(r==0)    //delete 0 position data and rear goes to last 
     {    
         printf("\nThe deleted element is %d", deque[r]);    
         r=size-1;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[r]);    
          r=r-1;  //rear is on 5 so now go to 4   
     }    
}    
    
int main()    
{    
    insert_front(20);    
    insert_front(10);    
    insert_rear(30);    
    insert_rear(50);    
    insert_rear(80);    
    display();  // Calling the display function to retrieve the values of deque    
    getfront();  // Retrieve the value at front-end  
    getrear();  // Retrieve the value at rear-end   
    delete_front();    
    delete_rear();    
    display(); // calling display function to retrieve values after deletion   
    return 0;    
}     