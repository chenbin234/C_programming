// Reverse a series of numbers

#include <stdio.h>>

#define N 10

int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for (p = &a[0]; p < &a[N]; p++)
    {
        scanf("%d", p);
    }

    printf("Inreverse order: ");
    for (p = &a[N-1]; p >= &a[0]; p--)
    {
        printf(" %d", *p);
        printf("\n");
    }

    return 0;
}