#include <stdio.h>
#include <stdlib.h>
#define max 100
struct stack
{
    int s[max];
    int r, f;
};
void intialize(struct stack *);
void display(struct stack *);
void insertion(struct stack *, int);
int deletion_stack(struct stack *);
int deletion_queue(struct stack *);
void palindrome(struct stack *);
int main()
{
    struct stack st;
    intialize(&st);
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
            insertion(&st, k);
            break;
        }
        case 2:
        {
            deletion_queue(&st);
            break;
        }
        case 3:
            palindrome(&st);
            break;
        case 4:
            display(&st);
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
    st->f = 0;
}

void insertion(struct stack *st, int k)
{
    if ((st->f == 0 && st->r == max - 1) || (st->f != 0 && st->f == st->r + 1))
        printf("Overflow.\n");
    else
    {
        st->r = (++st->r) % max;
        st->s[st->r] = k;
    }
}

int deletion_queue(struct stack *st)
{
    int a;
    if (st->r == -1 && st->f == 0){
        printf("Underflow\n");
        return 0;
    }
    else if (st->f == st->r)
    {
        st->r = -1;
        st->f = 0;
        return 0;
    }
    else{
        a=st->s[st->f];
        st->f = (++st->f) % max;
        return a;
    }
}
int deletion_stack(struct stack *st)
{
    int a;
    if (st->r == -1 && st->f == 0){
        printf("Underflow\n");
        return 0;
    }
    else if (st->f == st->r)
    {
        a=st->s[st->r];
        st->r = -1;
        st->f = 0;
        return a;
    }
    else{
        a=st->s[st->r];
        st->r = (--st->r) % max;
        return a;
    }
    if (st->r == -1 && st->f!=0){
        return 0;
        st->r = max - 1;
    }
}

// void display(struct stack *st)
// {
//     printf("Elements of queues  : ");
//     if (st->r < st->f && st->f != 0)
//     {
//         for (int i = st->f; i < max; i++)
//             printf("%d ", st->s[i]);
//         for (int i = 0; i <= st->r; i++)
//             printf("%d ", st->s[i]);
//     }
//     else
//         for (int i = st->f; i <= st->r; i++)
//             printf(" %d ", st->s[i]);

//     printf("\n");
// }

void display(struct stack *st){
    int a=st->f;
    do
    {
        printf("%d  ",st->s[a]);
        a=(a+1)%max;
    } while (a!=(st->r+1)%max);
    
}

void palindrome(struct stack *st){
    int a,b,c=0;
    while (st->f!=st->r && st->f!=st->r+1)
    {
        a=deletion_queue(st);
        b=deletion_stack(st);
        if (a!=b)
        {
            c=1;
            printf("This queue is not plindrome.");
            break;
        }
        
    }
    if((st->f==st->r || st->f==st->r+1) && c==0)
    printf("This queue is plindrome.");
}