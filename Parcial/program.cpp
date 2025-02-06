#include <stdio.h>
#include <locale.h>
#include <conio2.h>

int cant_num, option, nums, sum, prom;

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

int primo(int num){
	int i, bandera = 0;
	for (i = 2; i <= num / 2; ++i) {

		if (num % i == 0) {
		    bandera = 1;
		    break;
		}
	}
	
	if (num == 1) {
		printf("No es primo ni compuesto");
	} 
	else {
		if (bandera == 0){
			printf("%d es un numero primo.", num);	
		}
	}
	
	  return 0;
}

void Promedio()
{
    int temp, corregir, i, j, ciclo;
    sum = 0;
    for (i = 0; i < cant_num; i++)
    {
        corregir = 0;
        gotoxy(3, i + 2);
        printf("Ingrese el número %d: ", i + 1);
        do
        {
            if (corregir == 1)
            {
                gotoxy(3, i + 2);
                printf("Recuerda, un número mayor que 4: ");
            }
            scanf("%d", &nums);
            if (cant_num % 2 == 0)
            {
                while (nums % 2 != 0)
                {
                    gotoxy(3, i + 2);
                    printf("                                     ");
                    gotoxy(3, i + 2);
                    printf("Recuerda, número par: ");
                    scanf("%d", &nums);
                }
            }
            else
            {
                while (nums % 2 == 0)
                {
                    gotoxy(3, i + 2);
                    printf("                                              ");
                    gotoxy(3, i + 2);
                    printf("Recuerda, número impar: ");
                    scanf("%d", &nums);
                }
            }
            corregir = 1;
        } while (nums <= 4 );
        sum += nums;
    }
	prom = sum/cant_num;
	gotoxy(3, i+2);
    printf("El promedio es: %d", prom);
}

int serie()
{
	int bandera;
	for(int i = 1; i<=cant_num; i++)
	{
		if(bandera == 1)
		{
			gotoxy(2, i+1);
			printf("1");	
		}	
		gotoxy(2, i+2);
		printf("1/%d",i+1);
		bandera = 0;
	}
}

int main()
{
    IngresoNumero();
    MenuPrincipal();
    switch (option)
    {
    case 1:
        Promedio();
        break;
    case 2:
    	serie();
    	break;
    case 3:
    	break;
    }
}
