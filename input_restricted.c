#include<stdio.h>
#include<stdlib.h>
#define max 4
struct stack
{
    int s[max];
    int r,f;
};
void intialize(struct stack *);
void display(struct stack*);
void insertion(struct stack *, int);
void deletion_stack(struct stack *);
void deletion_queue(struct stack *);

int main(){
struct stack st;
intialize(&st);
int n=1,o,k;
while(n==1){
printf("Enter the number which operation you want : ");
scanf("%d",&o);
switch(o){
case 1:
{
printf("Enter the elements that you want to insert : ");
scanf("%d",&k);
insertion(&st,k);
break;
}
case 2:
{
deletion_queue(&st);
break;
}
case 3:
deletion_stack(&st);
break;
case 4:
display(&st);
break;

default:
exit(0);
}
printf("If you continue press 1 || otherwise press any key : ");
scanf("%d",&n);
}
}

void intialize(struct stack *st){
    st->r=-1; st->f=0;
}

void insertion(struct stack *st,int k){
        if((st->f==0 && st->r==max-1) || (st->f!=0 && st->f==st->r+1)) 
            printf("Overflow.\n");
        else{
            st->r=(++st->r)%max;
            st->s[st->r]=k;
        }
}

void deletion_queue(struct stack *st){
if(st->r==-1 && st->f==0)
printf("Underflow\n");
else if(st->f==st->r){
st->r=-1;st->f=0;
}
else
st->f=(++st->f)%max;
}
void deletion_stack(struct stack *st){
if(st->r==-1 && st->f==0)
printf("Underflow\n");
else if(st->f==st->r){
st->r=-1;st->f=0;
}
else
st->r=(--st->r)%max;
if(st->r==-1)st->r=max-1;
}

void display(struct stack *st ){
printf("Elements of queues  : ");
if (st->r<st->f && st->f!=0){
    for(int i=st->f;i<max;i++) printf("%d ",st->s[i]);
    for(int i=0;i<=st->r;i++) printf("%d ",st->s[i]);
}else
    for(int i=st->f;i<=st->r;i++)
        printf(" %d ",st->s[i]);

printf("\n");
}