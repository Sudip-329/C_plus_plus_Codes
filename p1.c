#include <stdio.h>
#include <stdlib.h>
#define max 5
int r = -1, f = -1;
int insertion(int[], int);
void deletion(int[]);
void display(int[]);
int main()
{
    int n = 1, a[max], o, k;
    printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
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
            insertion(a, k);
            break;
        }
        case 2:
        {
            deletion(a);
            break;
        }
        case 3:
            display(a);
            break;

        default:
            exit(0);
        }
        printf("If you continue press 1 || otherwise press any key : ");
        scanf("%d", &n);
    }
}
int insertion(int a[max], int p)
{
    if (r == max - 1)
        printf("Overflow\n");
    else if (r == -1 && f == -1)
    {
        f = 0;
        r = 0;
        a[r] = p;
    }
    else
    {
        r++;
        a[r] = p;
    }
}

void deletion(int a[max])
{
    if (r == -1 && f == -1)
        printf("Underflow\n");
    else if (f == r)
    {
        r = -1;
        f = -1;
    }
    else
        f++;
}

void display(int a[max])
{
    printf("Elements of queues  : ");
    for (int i = f; i <= r; i++)
        printf(" %d ", a[i]);

    printf("\n");
}
