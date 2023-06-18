#include <stdio.h>
#include <stdlib.h>
struct outrest
{
    int data;
    struct outrest *next;
};
void add_last(struct outrest **, int);
void add_first(struct outrest **, int);
void deletion(struct outrest **);
void display(struct outrest **);

int main()
{
    struct outrest *start = NULL;

    int c, n = 1;
    while (n == 1)
    {
        printf("Enter the number which operation you want: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
        {
            int q;
            printf("Give elements of queue: ");
            scanf("%d ",&q);
            add_first(&start, q);
            break;
        }
        case 2:
        {
            int q;
            printf("Give elements of queue: ");
            scanf("%d ",&q);
            add_last(&start, q);
            break;
        }
        case 3:
            deletion(&start);
            break;
        case 4:
            display(&start);
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

void add_last(struct outrest **st, int k)
{
    struct outrest *p, *t;
    p = (struct outrest *)malloc(sizeof(struct outrest));
    t = *st;
    p->data = k;
    p->next = NULL;
    if (*st == NULL)
    {
        *st = p;
    }
    else
    {
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = p;
    }
}
void add_first(struct outrest **st, int k)
{
    struct outrest *p, *t;
    p = (struct outrest *)malloc(sizeof(struct outrest));
    t = *st;
    p->data = k;
    p->next = NULL;
    *st = p;
    p->next = t;
}

void deletion(struct outrest **st)
{
    struct outrest *t = *st;
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
void display(struct outrest **st)
{
    struct outrest *t;
    t = *st;
    if (t == NULL)
        printf("Queue is empty.\n");
    else
    {
        printf("The elements of Queue :- ");
        while (t != NULL)
        {
            printf("%d ", t->data);
            t = t->next;
        }
    }
}