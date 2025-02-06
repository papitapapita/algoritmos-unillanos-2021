#include "iostream"
#include "stdio.h"
#include "conio.h"
#include "conio2.h"

float num1, num2, div; 
int opcion;
char salir;

void suma()
{
	int sum;
	sum=num1+num2;
	gotoxy(12,5);
	printf("%d + %d = %d",num1,num2,sum);
	gotoxy(12,7);	
}

int resta()
{
	int res;
	res = num1 - num2;
	gotoxy(12,5);
	printf("%d - %d = %d",num1,num2,res);
	res = num2 - num1;
	gotoxy(12,7);
	printf("%d - %d = %d",num2,num1,res);	
}

int multiplicacion()
{	
	int mul;
	mul = num1*num2;
	gotoxy(12,5);
	printf("%d * %d = %d",num1,num2,mul);
	
}

int division()
{
	div = num1 / num2;
	gotoxy(12,5);
	printf("%.1f / %.1f = %.2f",num1, num2, div);
	div = num2 / num1;
	gotoxy(12,7);
	printf("%.1f / %.1f = %.2f",num2,num1,div);	
}

main()
{
	do
	{
		clrscr();
		textcolor(2);
		gotoxy(9,2); 
		cprintf("OPERACIONES CON DOS NUMEROS");
		gotoxy(9,4);
		cprintf("Escriba dos numeros: ");
		gotoxy(30,4);
		cscanf("%d", &num1);
		gotoxy(35,4);
		cscanf("%d", &num2);	
		gotoxy(15,6); 
		cprintf("M E N U   P R I N C I P A L");
		gotoxy(9,8);
	    cprintf("1. Suma");
	    gotoxy(9,10);
	    cprintf("2. Resta");
	    gotoxy(9,12);
	    cprintf("3. Multiplicacion");
	    gotoxy(9,14);
	    cprintf("4. Division");
	    gotoxy(9,16);
	    cprintf("5. Salir");
	    gotoxy(9,18);
		cscanf("%i", &opcion);
		clrscr();
		switch(opcion)	
		{
			case 1:
				suma();
				break;
			case 2:
				resta();
				break;
			case 3:
				multiplicacion();
				break;
			case 4:
				division();
				break;
			case 5:
				
				break;
			default:
				printf("Ingresó un número incorrecto");
				break;
		}
		gotoxy(12,25); 
		cprintf("Ejecuta de nuevo todo el programa?(s/n): ");
		cscanf("%s",&salir);
    	clrscr();		
	}while(salir=='s'||salir=='S');

	
}
