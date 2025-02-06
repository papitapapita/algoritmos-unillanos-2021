#include "iostream"
#include "conio2.h"
#include "conio.h"
#include "stdio.h"

char salir;

void multiplosTres()
{
	//Ni = Número Inicial,Nf = Número Final, sp = Posición en la pantalla
	int Ni, Nf, sp;
	do
	{
		Ni=sp=0;
		clrscr();
		textcolor(2);
		gotoxy(12,5);
		cprintf("Multiplos de tres de n hasta N");
		gotoxy(12,7);
		cprintf("Numero Inicial: ");
		cscanf("%i",&Ni);		
		do
		{
			if(Nf<Ni+4)
			{
				clrscr();
				printf("No está ingresando un numero 4 numeros mayor que el inicial");
			}
			if(Nf<Ni){
				clrscr();
				printf("Esta ingresando un numero menor al numero inicial");
			}
			gotoxy(12,9);
			cprintf("Numero Final (debe ser 4 numeros mayor que el inicial): ");
			cscanf("%i",&Nf);
		}while(Nf<Ni||Nf<Ni+4);
		sp = 13;
		gotoxy(12,11);
		printf("Los multiplos de %i hasta %i son: ",Ni,Nf);
		for(Ni;Ni<=Nf;Ni++)
		{	
			if(Ni%3==0&&Ni!=0)
			{		
				gotoxy(12, sp);
				printf("%i", Ni);
				sp+=3;
			}		
		}
		gotoxy(12,25); 
		cprintf("Ejecuta de nuevo la opcion?(s/n): ");
		cscanf("%s",&salir);
    	clrscr();
	}while(salir=='s'||salir=='S');
	
}

void serieFibonacci()
{
	//can = cantidad de números a evaluar, sp = posición en pantalla
	int numeroUno, numeroDos, can, num, sp;
	do
	{
		clrscr();
		numeroUno = 0;
		numeroDos = 1;
		num = 1;
		gotoxy(12,5);
		printf("Hasta que numero quiere que la serie se muestre: ");
		scanf("%i", &can);
		gotoxy(12,7);
		printf("La serie de Fibonacci es: ");
		sp = 9;
		while(num<=can){
			gotoxy(12,sp);
			printf("%i", num);
			num = numeroUno + numeroDos;
			numeroUno = numeroDos;
			numeroDos = num;
			sp += 2;
		}
		sp+=2;
		gotoxy(12,sp+2); 
		cprintf("Ejecuta de nuevo la opcion?(s/n): ");
		cscanf("%s",&salir);
    	clrscr();
	}while(salir=='s'||salir=='S');
}

main()
{
	int opcion;
	do
	{
		clrscr();
		gotoxy(15,2); 
		cprintf("M E N U   P R I N C I P A L");
	    textcolor(2);
		gotoxy(9,5);
	    cprintf("1. Multiplos 3 de n hasta N");
	    gotoxy(9,7);
	    cprintf("2. Serie de Fibonacci hasta N");
	    gotoxy(9,9);
	    cprintf("3. Salir");
	    gotoxy(9,11);
		cscanf("%i", &opcion);
		switch(opcion)	
		{
			case 1:
				multiplosTres();
				break;
			case 2:
				serieFibonacci();
				break;
			case 3:
				
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
