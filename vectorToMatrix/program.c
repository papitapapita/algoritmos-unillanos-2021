#include <stdio.h>
#include <math.h>
#include <conio2.h>
#include <locale.h>

int option, aux, i, j, v, h;

void MenuPrincipal()
{
    clrscr();
    gotoxy(15, 2);
    printf("MENU PRINCIPAL");
    gotoxy(5, 4);
    printf("1. Vector a Matriz");
    gotoxy(5, 6);
    printf("2. Matriz a Vector");
    gotoxy(5, 8);
    scanf("%d", &option);
    clrscr();
}

int VectorAMatriz()
{
    int cant_num, arr[25], matriz[5][5], tam_mat, corregir;
    gotoxy(15, 2);
    printf("VECTOR A MATRIZ");
    gotoxy(5, 4);
    printf("Recuerde que la cantidad de elementos en su vector debe de ser un número con raiz exacta");
    gotoxy(5, 6);
    printf("Cantidad de números: ");
    
    do
    {
    	if(corregir == 1)
    	{
    		gotoxy(5, 6);
    		printf("Recuerda, un cuadrado perfecto:");
		}
    	gotoxy(5, 7);
    	printf("   ");
    	gotoxy(5, 7);
    	scanf("%d", &cant_num);	
    	corregir = 1;
	}while(sqrt(cant_num)*sqrt(cant_num) != cant_num);
    
    h = 2;
    
    for (i = 0; i < cant_num; i++)
    {
    	gotoxy(h+3, 10);
        scanf("%d", &arr[i]);
        h += 3; 
    }
    
    i = aux = 0;
    tam_mat = sqrt(cant_num);

    for (i = 0; i < tam_mat; i++)
    {
        for (j = 0; j < tam_mat; j++)
        {
            matriz[i][j] = arr[aux];
            aux++;
        }
    }
    
    i = j = 0;
	v = h = 2;
	
	gotoxy(3, 12);
	printf("Su matriz es: ");
	
	v = 14;
	
    for (i = 0; i < tam_mat; i++)
    {
    	h = 3;
        for (j = 0; j < tam_mat; j++)
        {
        	gotoxy(h,v);
            printf("%d", matriz[i][j]);
            h += 3;
        }
        v += 2;
    }
    
    return 0;
}

int matrizAVector()
{
    int cant_num, arr[25], matriz[5][5], tam_arr;
    gotoxy(15, 2);
    printf("MATRIZ A VECTOR");
    gotoxy(3, 4);
    printf("Tamaño de matriz: ");
    gotoxy(3, 5);
    scanf("%d", &cant_num);

	v = 7;

    for (i = 0; i < cant_num; i++)
    {
    	h = 3;
        for (j = 0; j < cant_num; j++)
        {
        	gotoxy(h, v);
            scanf("%d", &matriz[i][j]);
            h += 3;
        }
        v += 2;
    }
    
    aux = 0;

    for (i =  0; i < cant_num; i++)
    {
    	for(j = 0; j < cant_num; j++)
    	{
    		arr[aux] = matriz[i][j];
    		aux++;
		}
	}
	
	printf("Tu vector: \n");
	
	for(i = 0; i < aux; i++)
	{
		printf(" %d ", arr[i]);
	}
}

int main()
{
	char restart = 'y';
	setlocale(LC_ALL, "");
	do
	{
		MenuPrincipal();
	    switch (option)
	    {
	    case 1:
	        VectorAMatriz();
	        break;
	    case 2:
	        matrizAVector();
	        break;
	    default:
	        break;
		}
		printf("\n\n ¿Desea ejecutar el programa de nuevo? (y/n): ");
	    scanf(" %c", &restart);
	}while(restart == 'y' || restart == 'Y');
    
}
