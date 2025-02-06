#include <stdio.h>
#include <locale.h>
#include <conio2.h>

int cant_num, option, nums[20];

void IngresoNumero()
{
    int corregir;
    corregir = 0;
    setlocale(LC_ALL, "");

    gotoxy(5, 2);
    printf("Ingresar un número positivo mayor que 6: ");
    do
    {
        if (corregir == 1)
        {
            clrscr();
            gotoxy(5, 2);
            printf("Recuerda, un número mayor que 6: ");
        }
        scanf("%d", &cant_num);
        corregir = 1;
    } while (cant_num <= 6);
}

void MenuPrincipal()
{
    clrscr();
    gotoxy(15, 7);
    printf("MENU PRINCIPAL");
    gotoxy(5, 9);
    printf("Su número es el: %d", cant_num);
    gotoxy(5, 11);
    printf("¿Qué desea hacer?");
    gotoxy(5, 13);
    printf("1. Promedio");
    gotoxy(5, 15);
    printf("2. Serie");
    gotoxy(5, 17);
    printf("3. Salir");
    gotoxy(5, 19);
    scanf("%d", &option);
    clrscr();
}

void Promedio()
{
    int temp, corregir, i, j, ciclo;
    for (i = 0; i < cant_num; i++)
    {
        gotoxy(3, i + 2);
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &nums[i]);
        for (j = 0; j < i; j++)
        {
            while (nums[i] == nums[j])
            {
                gotoxy(3, i + 2);
                printf("                                                               ");
                gotoxy(3, i + 2);
                printf("El número %d ya está, ingrese otro número: ", i);
                scanf("%d", &nums[i]);
            }
        }
    }

    for (i = 0; i < cant_num; i++)
    {
        printf("Número: %d ", nums[i]);
    }
}

void main()
{
    IngresoNumero();
    MenuPrincipal();
    switch (option)
    {
    case 1:
        Promedio();
        break;
    }
}
