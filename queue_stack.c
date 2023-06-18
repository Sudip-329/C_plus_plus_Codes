#include <stdlib.h>
#include <stdio.h>
#define max 100
struct stack
{
    int s[max];
    int r, f;
} st1, st2;

void intialize(struct stack *);
void push(struct stack *, int);
void pop(struct stack *, struct stack *);
void print(struct stack *);
void display(struct stack *);
void insertion(struct stack *, int);
void deletion(struct stack *, int *);
int main()
{
    // struct stack st1,st2;
    intialize(&st2);
    intialize(&st1);
    int n = 1, o, k;
    while (n == 1)
    {
        printf("Enter the number which operation you want : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
        {
            printf("Enter the elements that you want to insert : ");
            scanf("%d", &k);
            push(&st1, k);
            break;
        }
        case 2:
        {
            pop(&st1, &st2);
            break;
        }
        case 3:
            display(&st1);
            break;

        default:
            exit(0);
        }
        printf("If you continue press 1 || otherwise press any key : ");
        scanf("%d", &n);
    }
}

void intialize(struct stack *st)
{
    st->r = -1;
    st->f = -1;
}
void insertion(struct stack *st, int k)
{
    if (st->r == max - 1)
    {
        printf("Overflow\n");
    }
    else if (st->r == -1 && st->f == -1)
    {
        st->r = 0;
        st->f = 0;
        st->s[st->r] = k;
    }
    else
    {
        st->r++;
        st->s[st->r] = k;
    }
}
void deletion(struct stack *st, int *b)
{
    if (st->r == -1 && st->f == -1)
        printf("Underflow\n");
    else if (st->r == st->f)
    {
        *b = st->s[st->f];
        st->r = -1;
        st->f = -1;
    }
    else
    {
        *b = st->s[st->f];
        st->f++;
    }
}

void display(struct stack *st)
{
    if (st->f == -1 && st->r == -1)
        printf("There is no element\n");
    else
    {
        printf("Elements of queues  : ");
        for (int i = st->f; i <= st->r; i++)
            printf(" %d ", st->s[i]);
    }

    printf("\n");
}

void push(struct stack *st, int k)
{
    insertion(st, k);
}

// Using recursion...................

void pop(struct stack *st1, struct stack *st2)
{
    int b;
    if (st1->r == st1->f)
    {
        st1->f = 0;
        st1->r = -1;
        return;
    }
    else
    {
        deletion(st1, &b);
        insertion(st2, b);
        pop(st1, st2);
        deletion(st2, &b);
        insertion(st1, b);
    }
}

// This process was given by sir.............

// void pop(struct stack *st1,struct stack *st2){
//     int b;
//     if(st1->f==-1 && st1->r==-1) printf("Underflow\n");
//     while (st1->r!=st1->f)
//     {
//         deletion(st1,&b);
//         insertion(st2,b);
//     }
//     st1->f=-1;st1->r=-1;
//     while (st2->r!=-1)
//     {
//         deletion(st2,&b);
//         insertion(st1,b);
//     }
// }
