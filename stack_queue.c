#include <stdlib.h>
#include<stdio.h>
#define max 100
struct  stack
{
    int s[max];
    int top;
}st1,st2;

void intialize(struct stack *);
void push(struct stack *,int );
void pop(struct stack *,int *);
void print(struct stack*);
void display(struct stack*);
void insertion(struct stack *, int);
void deletion(struct stack *,struct stack *);
int main(){
//struct stack st1,st2;
intialize(&st2);
intialize(&st1);
int n=1,o,k;
while(n==1){
printf("Enter the number which operation you want : ");
scanf("%d",&o);
switch(o){
case 1:
{
printf("Enter the elements that you want to insert : ");
scanf("%d",&k);
insertion(&st1,k);
break;
}
case 2:
{
deletion(&st1,&st2);
break;
}
case 3:
display(&st1);
break;

default:
exit(0);
}
printf("If you continue press 1 || otherwise press any key : ");
scanf("%d",&n);
}

}

void intialize(struct stack *st){
    st->top=-1;
}
void push(struct stack *st,int k){
    if (st->top==max-1)
    {
        printf("overflow\n");
    }else{
        st->top++;
        st->s[st->top]=k;
    }
    
}
void pop(struct stack *st,int *b){
    if(st->top==-1) printf("Underflow\n");
    else{
        *b=st->s[st->top];
        st->top--;
    }
}

void display(struct stack *st){
    int b;
    if(st->top==-1) return;
    pop(st,&b);
    display(st);
    printf(" %d ",b);
    push(st,b);
}

void insertion(struct stack *st,int k){
    push(st,k);
}

//Using recursion...................

void deletion(struct stack *st1,struct stack *st2){
    int b;
    if (st1->top==-1) return;
    if(st1->top==0)
    {
        pop(st1,&b);
        deletion(st1,st2);
    }else{
        pop(st1,&b);
        push(st2,b);
        deletion(st1,st2);
        pop(st2,&b);
        push(st1,b);          
    }     
        
    
}

// This process was given by sir.............

// void deletion(struct stack *st1,struct stack *st2){
//     int b;
//     if (st1->top==-1) printf("Underflow\n");
//     while (st1->top!=0)
//     {
//         pop(st1,&b);
//         push(st2,b);
//     }
//     pop(st1,&b);
//     while (st2->top!=-1)
//     {
//         pop(st2,&b);
//         push(st1,b);
//     }
    
// }