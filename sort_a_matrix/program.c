#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 10

// c = columnas
// r = rows (filas)
// z,q = auxiliares
// minimun = valor mínimo

// Función para ordenar la matriz
void sort_matrix(int arr[SIZE][SIZE],
                 int r, int c)
{

    // Atravesar la matriz
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            // Elemento mínimo actual
            int minimum = arr[i][j];

            // Índice del elemento mínimo actual
            int z = i;
            int q = j;

            // Revisar si hay algún elemento más pequeño
            int w = j;

            for (int k = i; k < r; k++)
            {

                for (; w < c; w++)
                {

                    // Actualizar el valor del elemento mínimo
                    if (arr[k][w] < minimum)
                    {

                        minimum = arr[k][w];

                        // Actualizar el índice del elemento mínimo
                        z = k;
                        q = w;
                    }
                }
                w = 0;
            }

            // Intercambio del elemento actual y el elemento menor
            int temp = arr[i][j];
            arr[i][j] = arr[z][q];
            arr[z][q] = temp;
        }
    }
}

// Función para mostrar la matriz
void printMat(int arr[SIZE][SIZE],
              int r, int c)
{
    int x = 3;
    int y = 20;
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            gotoxy(x, y);
            printf("%d ", arr[i][j]);
            x += 2;
        }
        x = 3;
        y += 2;
    }
}

int main()
{
    system("clear");

    int arr[SIZE][SIZE], r, c, x, y;

    //asignando el valor de las columnas y las filas
    gotoxy(3, 2);
    printf("¿Cuántas columnas quiere?: ");
    scanf("%d", &c);
    gotoxy(3, 3);
    printf("¿Cuántas filas quiere?: ");
    scanf("%d", &r);

    x = 3;
    y = 5;

    //Obteniendo los valores del array
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            gotoxy(x, y);
            scanf("%d", &arr[i][j]);
            x += 2;
        }
        x = 3;
        y += 2;
    }

    sort_matrix(arr, r, c);

    printMat(arr, r, c);

    return 0;
}