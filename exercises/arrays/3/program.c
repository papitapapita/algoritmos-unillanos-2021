#include <conio.h>
#include <stdio.h>

int main()
{
    system("clear");

    int arr[10], i, x, sum, a;
    x = 3;
    sum = 0;
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

    //sum of the values
    x = 3;
    for (i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    gotoxy(3, 15);
    printf("The sum of your values is: %d", sum);
}