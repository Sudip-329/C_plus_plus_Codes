#include <stdio.h>
#include <stdlib.h>

struct priority_queue
{
    int data, priority;
    struct priority_queue *next;
};
void add(struct priority_queue **, int, int);
void deletion(struct priority_queue **);
void display(struct priority_queue **);

int main()
{
    struct priority_queue *start = NULL;

    int c, n = 1;
    while (n == 1)
    {
        printf("Enter the number which operation you want: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
        {
            int tp, q;
            printf("Give elements of queue and priority : ");
            scanf("%d %d", &tp, &q);
            add(&start, tp, q);
            break;
        }
        case 2:
            display(&start);
            break;
        case 3:
            deletion(&start);
            break;
        default:
            exit(0);
        }
        printf("\nPress 1 to continune || 0 to exit: ");
        scanf("%d", &n);
        if (n == 0 || n != 1)
            exit(0);
    }
}

void add(struct priority_queue **st, int k, int pr)
{
    struct priority_queue *p, *t, *t1;
    p = (struct priority_queue *)malloc(sizeof(struct priority_queue));
    t = *st;
    p->data = k;
    p->priority = pr;
    p->next = NULL;
    if (*st == NULL || pr > t->priority)
    {
        *st = p;
        p->next = t;
    }
    else if (t->next == NULL)
    {
        t->next = p;
    }
    else
    {
        t1 = t;
        t = t->next;
        while (pr <= t->priority && t->next != NULL)
        {
            t = t->next;
            t1 = t1->next;
        }
        if (t->next == NULL && pr <= t->priority)
        {
            t->next = p;
        }
        else
        {
            p->next = t1->next;
            t1->next = p;
        }
    }
}

void deletion(struct priority_queue **st)
{
    struct priority_queue *t = *st;
    if (*st == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        *st = t->next;
        free(t);
    }
}

void display(struct priority_queue **st)
{
    struct priority_queue *t;
    t = *st;
    if (t == NULL)
        printf("Queue is empty.\n");
    else
    {
        printf("The priority --and----- Data\n");
        while (t != NULL)
        {
            printf("\t%d      %d\n", t->priority, t->data);
            t = t->next;
        }
    }
}