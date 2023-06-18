#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct edge;
struct node
{
    int data,st;
    struct node *next;
    struct edge *edge;
} *start = NULL;

struct edge
{
    struct node *prev;
    struct edge *next;
};
void add(int);
void edge1(int, int);
void display();
void bfs();
int main()
{
    int n = 1, o;
    int city, city1, city2;

    while (n == 1)
    {
        printf("Enter the number which operation you want : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
        {
            printf("Enter the new city : ");
            scanf("%d", &city);
            add(city);
            break;
        }
        case 2:
        {
            printf("Enter the vertices cities:");
            scanf("%d %d", &city1, &city2);

            edge1(city1, city2);
            break;
        }
        case 3:
            display();
            break;
        default:
            exit(0);
        }
        printf("If you continue press 1 || otherwise press any key : ");
        scanf("%d", &n);
    }
}

void add(int city)
{
    struct node *p, *t;
    t = start;
    p = (struct node *)malloc(sizeof(struct node));
    p->next = NULL;
    p->edge = NULL;
    p->data = city;
    p->st=1;
    // strcpy(p->data,city);
    if (start == NULL)
    {
        start = p;
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

void edge1(int city1, int city2)
{
    struct node *t1, *t2 = start;
    struct edge *p, *temp;
    int c=0;
    p = (struct edge *)malloc(sizeof(struct edge));
    p->next = NULL;
    p->prev = NULL;
    while ((t2->data != city1) && (t2->data != city2))
    {
        t2 = t2->next;
    }
    if(t2->data==city2)  c=1;
    t1 = t2;
    t2=t2->next;
    while ((t2->data != city2) && (t2->data != city1) )
    {
        t2 = t2->next;
    }
    if(c==1){
    if (t2->edge == NULL)
    {
        t2->edge = p;
        p->prev = t1;
    }
    else
    {
        temp = t2->edge;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
        p->prev = t1;
    }
    }else{
    if (t1->edge == NULL)
    {
        t1->edge = p;
        p->prev = t2;
    }
    else
    {
        temp = t1->edge;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
        p->prev = t2;
    }
    }

}

void display()
{
    struct node *p = start, *q;
    struct edge *t;

    while (p != NULL)
    {
        printf("%d\t", p->data);
        if (p->edge != NULL)
        {
            t = p->edge;
            while (t != NULL)
            {
                q = t->prev;
                printf(" %d", q->data);
                t = t->next;
            }
        }
        p = p->next;
        printf("\n");
    }
}