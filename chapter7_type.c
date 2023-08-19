#include <stdio.h>

int main(void)
{
    int n;
    long i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%15d%15d\n", i, i * i);

        if ((i * i) < 0)
            break;
    }

    return 0;
}