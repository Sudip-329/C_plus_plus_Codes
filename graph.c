#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct edge;
struct node
{
    char data[20];
    struct node *next;
    struct edge *edge;
}*start = NULL;

struct edge
{
    struct node *prev;
    struct edge *next;
};
void add(char *);
void edge1(char *, char *);
void display();

int main()
{
    int n = 1, o;
    char city[20], city1[20], city2[20];

    while (n == 1)
    {
        printf("Enter the number which operation you want : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
        {
            printf("Enter the new city : ");
            scanf("%s", &city);
            add(city);
            break;
        }
        case 2:
        {
            printf("Enter the vertices cities:");
            scanf("%s %s", &city1, &city2);

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

void add(char *city)
{
    struct node *p, *t;
    t = start;
    p = (struct node *)malloc(sizeof(struct node));
    p->next = NULL;
    strcpy(p->data, city);
    p->edge = NULL;
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

void edge1(char *city1, char *city2)
{
    struct node *t1, *t2 = start;
    struct edge *p, *temp;
    p = (struct edge *)malloc(sizeof(struct edge));
    p->next = NULL;
    p->prev = NULL;
    while ((0 != strcmp(t2->data, city1)) &&(0 != strcmp(t2->data, city2)))
    {
        t2 = t2->next;
    }

    t1 = t2;
    t2=t2->next;
    while ((0 != strcmp(t2->data, city2)) && (0 != strcmp(t2->data, city1)))
    {
        t2 = t2->next;
    }

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

void display()
{
    struct node *p = start, *q;
    struct edge *t;
    
    while (p != NULL)
    {
        printf(" %s  ", p->data);
        if (p->edge != NULL)
        {
            t = p->edge;
            printf("Connected city: ");
            while (t != NULL)
            {
                q = t->prev;
                printf(" %s ", q->data);
                t = t->next;
            }
        }
        p = p->next;
        printf("\n");
    }
}