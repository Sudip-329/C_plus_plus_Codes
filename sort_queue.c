
#include <stdio.h>
#include <stdlib.h>
#define size 100
struct queue
{
    int r, f, max;
    int s[size];
};
void insertion(struct queue *, int);
int deletion(struct queue *);
void sort(struct queue *);
void display(struct queue *);
void initialize(struct queue *, int);

int main()
{
    struct queue q1;
    int m, a;
    printf("Enter how many elements you wants:");
    scanf("%d", &m);
    initialize(&q1, m);
    printf("Please enter element in queue :");
    while (m--)
    {
        scanf("%d", &a);
        insertion(&q1, a);
    }
    sort(&q1);
    printf("After sorting elements of queue :");
    display(&q1);
}

void initialize(struct queue *q, int m)
{
    q->r = -1;
    q->f = 0;
    q->max = m;
}

void insertion(struct queue *q, int t)
{
    if ((q->r == q->max - 1 && q->f == 0) || (q->r + 1 == q->f && q->f != 0))
        printf("Overflow.");
    else
    {
        // q->f=0; //this line mades me lot of troubles
        q->r = (q->r + 1) % q->max;
        q->s[q->r] = t;
    }
}

int deletion(struct queue *q)
{
    if (q->f == 0 && q->r == -1)
    {
        return 0;
    }
    else if (q->r == q->f)
    {
        int p = q->s[q->f];
        q->f == 0;
        q->r = -1;
        return p;
    }
    else
    {
        int p = q->s[q->f];
        q->f = (q->f + 1) % q->max;
        return p;
    }
}

void display(struct queue *q)
{
    int a = q->f;
    do
    {
        printf(" %d ", q->s[a]);
        a = (a + 1) % q->max;
    } while (a != (q->r + 1) % q->max);
    printf("\n");
}

void sort(struct queue *q)
{
    int a, b, i = 0, j, l = q->max;
    while (l--)
    {
        if (q->f == -1)
            break;
        a = deletion(q);
        if (q->f == -1)
            break;
        b = deletion(q);
        j = q->max - i - 1;
        while (j--)
        {
            if (a < b)
            {
                if (q->f != 0)
                {
                    insertion(q, a);
                    a = deletion(q);
                }
                else
                    break;
            }
            else
            {
                if (q->f != 0)
                {
                    insertion(q, b);
                    b = deletion(q);
                }
                else
                    break;
            }
        }
        if (a > b)
        {
            insertion(q, b);
            insertion(q, a);
        }
        else
        {
            insertion(q, a);
            insertion(q, b);
        }
        q->f = 0;
        q->r = q->max - 1;
        i++;
    }
}

// void insertion(struct queue *q, int t)
// {
//     if (q->f == -1)
//     {
//         q->f++;
//         q->r++;
//         q->s[q->r] = t;
//     }
//     else if ((q->r + 1) % max == q->f)
//         printf("Overflow.");
//     else
//     {

//         q->r = (q->r + 1) % max;
//         q->s[q->r] = t;
//     }
// }