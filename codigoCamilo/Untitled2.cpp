#include "conio.h"
#include "stdio.h"
#include "iostream"
#include "conio2.h"

float div;
int op,cant,Num,N1,N2,sum,rest,mult;

char salir='s';

void suma()
{  sum=N1+N2;clrscr();
   gotoxy(11,8);
   cprintf("La suma de %i mas %i: %i",N1,N2,sum);

	}

void resta(){
    rest=N1-N2; clrscr();
   gotoxy(11,8);
   cprintf("La resta de %i menos %i: %i",N1,N2,rest);
    }

void multiplicacion(){
    mult=N1*N2 ; clrscr();
   gotoxy(11,8);
   cprintf("La multiplicacion de %i por %i: %i",N1,N2,mult);
    }

void division(){
    div=N1%N2;  clrscr();
   gotoxy(11,8);
   cprintf("La division de %i entre %i: %d",N1,N2,div);
    }

void salida()
{}
main()
{
   do
	{ clrscr();
   textcolor(12);gotoxy(12,3); cprintf("Escriba dos numeros ");
textcolor(1);gotoxy(11,6); cprintf("Primer numero: "); cscanf("%d",&N1);
textcolor(1);gotoxy(11,8); cprintf("Segundo numero: "); cscanf("%d",&N2);


      textcolor(12);
		gotoxy(12,12);
		cprintf("Que desea hacer?");
	    textcolor(2);
		gotoxy(12,15);
	    cprintf("1. Sumar ");
	    gotoxy(12,17);
	    cprintf("2. Restar");
	    gotoxy(12,19);
	    cprintf("3. Multiplicar");
       gotoxy(12,21);
	    cprintf("4. Dividir");
       gotoxy(12,23);
	    cprintf("5. salir");
	    textcolor(12);
       gotoxy(15,26);
      cprintf("Elija Opcion: "); cscanf("%i",&op);
      clrscr();
		switch (op)
		{
			case 1: suma(); break;
         case 2: resta(); break;
         case 3: multiplicacion(); break;
         case 4: division(); break;
         case 5: salida(); break;

			default:
				cprintf("Digito un numero incorrecto intente de nuevo");
			break;
		}
      gotoxy(15,22);
		cprintf("Ejecutar el programa de nuevo (s/n): ");
		cscanf("%s", &salir); clrscr();

	}while((salir=='s')||(salir=='S'));
}

