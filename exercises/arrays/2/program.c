#include <stdio.h>
#include <conio.h>

int main()
{
    system("clear");

    // a = amount
    // i = iterations
    // x = coordinates in x
    int arr[10], i, a, x;
    x = 3;
    //Assigning value to amount
    gotoxy(3, 5);
    printf("How many values will you input?: ");
    scanf("%d", &a);

    //getting the values of the array
    for (i = 0; i < a; i++)
    {
        gotoxy(x, 10);
        scanf("%d, ", &arr[i]);
        x += 3;
    }

    x = 3;

    //showing the elements in reverse
    for (i = a - 1; i >= 0; i--)
    {
        gotoxy(x, 15);
        printf("%d, ", arr[i]);
        x += 3;
    }
}