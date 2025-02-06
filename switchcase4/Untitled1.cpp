#include <stdio.h>
#include <conio2.h>
#include <conio.h>

int num1, sum = 0, prom, cantNumeros, sp = 9; 

main()
{
	gotoxy(12,5);
	printf("Cuantos numeros va a ingresar");
	gotoxy(12,7);
	scanf("%i", &cantNumeros);
	gotoxy(12,9);
	printf("Ingrese los numeros");
	int z = 11;
	for(int i = 1;i<=cantNumeros;i++)
	{
		gotoxy(12,z);
		scanf("%i",&num1);
		sum+=num1;
		z+=2;
	}
	prom = sum/cantNumeros;
	gotoxy(12,z+2);
	printf("Su promedio es: %i",prom);
	if(prom<0)
	{
		int opcion;	
			clrscr();
			textcolor(2);
			gotoxy(9,2); 
			printf("M E N U   P R I N C I P A L");
			gotoxy(12,4);
			cprintf("1. Volverlo positivo");
			gotoxy(12,6);
			cprintf("2. Indicar si es multiplo de tres");
			gotoxy(12,8);
			cprintf("3. salir");
			gotoxy(12,10);
			cscanf("%i", &opcion);
			switch(opcion){
				case 1:
					gotoxy(12,12);
					prom=prom*-1;
					printf("El promedio positivo es %i", prom);
					break;
				case 2:
					if(prom%3==0)
					{
						printf("El promedio es multiplo de tres");
					}
					else
					{
						printf("El promedio no es multiplo de tres");
					}
					break;
				case 3:
					
					break;
				default:
					printf("ingreso un numero incorrecto");
					break; 	
			}
	}
	else if(prom>0)
	{
		int opcion; 	
		clrscr();
		textcolor(2);
		gotoxy(9,2); 
		printf("M E N U   P R I N C I P A L");
		gotoxy(12,4);
		cprintf("1. Saber si es par o impar");
		gotoxy(12,6);
		cprintf("2. Mostrar serie de Fibonacci hasta el numero del promedio");
		gotoxy(12,6);
		cprintf("3. salir");
		gotoxy(12,8);
		cscanf("%i", &opcion);
		switch(opcion)
		{
			case 1:
				if(prom%2==0)
				{
					printf("El promedio es par");
				}
				else
				{
					printf("El promedio es impar");
				}
				break;
			case 2:
				int num, numeroUno, numeroDos;
				while(num<=prom)
				{
					gotoxy(12,sp);
					printf("%i", num);
					num = numeroUno + numeroDos;
					numeroUno = numeroDos;
					numeroDos = num;
					sp += 2;
				}
				break;
			case 3:
				
				break;
			default:
				printf("ingreso un valor incorrecto");
				break; 	
	}
	}else
	{
		int opcion; 	
			clrscr();
			textcolor(2);
			gotoxy(9,2); 
			printf("M E N U   P R I N C I P A L");
			gotoxy(12,4);
			cprintf("1. Volverlo par menor a 10");
			gotoxy(12,6);
			cprintf("2. Volverlo impar mayor a 10");
			gotoxy(12,6);
			cprintf("3. salir");
			gotoxy(12,8);
			cscanf("%i", &opcion);
			switch(opcion)
			{
				case 1:
					prom+=2;
					printf("Par menor a 10", prom);	
					break;
				case 2:
					prom+=11;
					printf("Impar mayor a 10", prom);	
					break;
				case 3:
					break;
				default:
					printf("ingreso un numero incorrecto");
					break; 	
			}
	}
}
