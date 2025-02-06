#include <stdio.h>

int main()
{
    int array[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d, ", array[i]);
    }
}