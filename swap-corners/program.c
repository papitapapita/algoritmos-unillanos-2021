#include <stdio.h>
#include <conio.h>

int main()
{
    system("clear");

    // i = iterations
    // j = second iteration
    // x = coordinates in x
    // c = columns
    // r = rows
    // y = coordinates in y
    int arr[10][10], i, j, c, x, r, y, aux;
    x = 3;
    y = 5;

    //Assigning value to rows and columns
    gotoxy(3, 2);
    printf("How many columns will you input?: ");
    scanf("%d", &c);
    gotoxy(3, 3);
    printf("How many rows will you input?: ");
    scanf("%d", &r);

    //getting the values of the array
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            gotoxy(x, y);
            scanf("%d", &arr[i][j]);
            x += 2;
        }
        x = 3;
        y += 2;
    }

    //swapping the corners
    aux = arr[r - 1][c - 1];
    arr[r - 1][c - 1] = arr[0][0];
    arr[0][0] = aux;

    //showing the new array
    x = 3;
    printf("---------------------");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            gotoxy(x, y);
            printf("%d", arr[i][j]);
            x += 2;
        }
        x = 3;
        y += 2;
    }

    return 0;
}