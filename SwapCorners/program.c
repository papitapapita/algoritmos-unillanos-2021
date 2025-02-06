#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <conio2.h>

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int matrix[20][20], i, j, tam, v, h, aux ,pos;
	
	gotoxy(3,5);
	printf("De qué tamaño es la matriz?: ");
	gotoxy(3,6);
	scanf("%d", &tam);
	
	v = 8;
	
	for(i = 0;i < tam; i++)
	{
		h = 3;
		for(j = 0; j < tam; j++)
		{
			gotoxy(h, v);
			matrix[i][j] = (1+rand()%10);
			printf("%d", matrix[i][j]);
			h += 3;
		}
		v += 2; 
	}
	
	pos = tam - 1;
	
	aux = matrix[0][pos];
	matrix[0][pos] = matrix[0][0];
	matrix[0][0] = aux;
	aux = matrix[pos][0];
	matrix[pos][0] = matrix[pos][pos];
	matrix[pos][pos] = aux;
	
	printf("\n\n");
	
	for(i = 0;i < tam; i++)
	{
		h = 3;
		for(j = 0; j < tam; j++)
		{
			gotoxy(h, v);
			printf("%d", matrix[i][j]);
			h += 3;
		}
		v += 2;
	}
	
}
