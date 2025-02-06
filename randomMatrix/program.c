#include <stdio.h>
#include <time.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int matrix[20][20], i, j, tam;
	printf("De qué tamaño es la matriz?: ");
	scanf("%d", &tam);
	
	for(i = 0;i < tam;i++)
	{
		for(j = 0; j < tam; j++ )
		{
			matrix[i][j] = (1+rand()%100);
			printf("valor (%d, %d) = %d\n",i,j,matrix[i][j]);
		}
	}
	
}
