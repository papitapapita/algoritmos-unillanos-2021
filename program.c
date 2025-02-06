#include <stdio.h>
#include <conio.h>

int main()
{
    system("clear");
    int array[6], i, aux, x;
    x = 5;
    gotoxy(10, 3);
    printf("Ingresar elementos del array\n");

    for (i = 0; i < 6; i++)
    {
        gotoxy(x, 5);
        scanf("%d", &array[i]);
        x += 3;
    }

    aux = array[0];
    array[0] = array[5];
    array[5] = aux;
    x = 5;
    for (i = 0; i < 6; i++)
    {
        gotoxy(x, 10);
        printf("%d, ", array[i]);
        x += 3;
    }

    return 0;
}