#include <stdio.h>
#include <stdlib.h>
#define max 5
int r = -1, f = 0;
int insertion(int[], int);
void deletion(int[]);
void display(int[]);
int main()
{
    int n = 1, a[max], o, k;
    printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
    while (n == 1)
    {
        printf("Enter your choice : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
        {
            printf("Enter the element: ");
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
    if ((f == 0 && r == max - 1) || (f != 0 && f == r + 1))
        printf("Overflow\n");
    else
    {
        r = (++r) % max;
        a[r] = p;
    }
}

void deletion(int a[max])
{
    if (r == -1 && f == 0)
        printf("Underflow\n");
    else if (f == r)
    {
        r = -1;
        f = 0;
    }
    else
        f = (++f) % max;
}

// void display(int a[max]){
// printf("Elements of queues  : ");
// if (r<f)
// {
//     for(int i=f;i<max;i++) printf("%d ",a[i]);
//     for(int i=0;i<=r;i++) printf("%d ",a[i]);
// }else
//     for(int i=f;i<=r;i++)
//         printf(" %d ",a[i]);

// printf("\n");
// }

void display(int a[max])
{
    int i = f;
    printf("Elements of queues  : ");
    do
    {
        printf(" %d ", a[i]);
        (++i) % (max);

    } while (i != (r + 1) % max);

    printf("\n");
}