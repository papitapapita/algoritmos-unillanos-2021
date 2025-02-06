#include "conio.h"
#include "stdio.h"
#include "iostream"
#include "conio2.h"

int op,cant,Num,sumN,sumP;char salir='s';
void UNO()
{
   do
         { textcolor(1);gotoxy(11,13); cprintf("Cuantos numeros evalua: "); textcolor(0);cscanf("%i",&cant);
           while(cant<=0){gotoxy(11,13); cprintf("Cuantos numeros evalua: "); cscanf("%i",&cant);}
           textcolor(5);gotoxy(12,15); cprintf("Escriba los numeros: "); int z=33; sumP=sumN=0;
            for(int cont=1;cont<=cant;cont++)
           {gotoxy(z,15);textcolor(0);cscanf("%i",&Num);
             if(Num<0)
               {sumN=sumN+Num;}
               else
             {sumP=sumP+Num;}
             Num++;z+=4;
           }
            textcolor(2);gotoxy(12,17); cprintf("La suma de negativos fue de: %i",sumN);
            gotoxy(12,19); cprintf("La suma de Positivos fue de: %i",sumP);
            textcolor(12);gotoxy(12,21); cprintf("Ejecuta de nuevo la opcion(s/n): ");cscanf("%s",&salir);
            clrscr();textcolor(12);
            gotoxy(15,2); cprintf("M E N U   P R I N C I P A L");
            textcolor(13);gotoxy(9,5);
            cprintf("1. Suma de numeros negativos y positivos hasta N");
    gotoxy(9,7);
    cprintf("2. Suma de pares e impares desde N hasta N");
    gotoxy(9,9);
      cprintf("3. Salir");

        }


    while((salir=='s')||(salir=='S'));

    }

void DOS()
{ do
          {int sum_imp,Ni,Nf,sum_p; Ni=Nf=sum_imp=sum_p=0;
          textcolor(13);gotoxy(35,13);cprintf("Desde # hasta # ");
          textcolor(1);gotoxy(12,15);cprintf("Numero Inicial: ");textcolor(0);cscanf("%i",&Ni);
          textcolor(1);gotoxy(12,17);cprintf("Numero Final: ");textcolor(0);cscanf("%i",&Nf);
          while(Nf<Ni)
       {textcolor(1);gotoxy(12,17);cprintf("Numero Final: ");textcolor(0);cscanf("%i",&Nf);
         }
            clrscr();textcolor(12);
            gotoxy(15,2); cprintf("M E N U   P R I N C I P A L");
            textcolor(13);gotoxy(9,5);
    cprintf("1. Suma de numeros negativos y positivos hasta N");
    gotoxy(9,7);
    cprintf("2. Suma de pares e impares desde N hasta N");
    gotoxy(9,9);
      cprintf("3. Salir");


           while(Ni<=Nf)
       {
          textcolor(12);gotoxy(11,13); cprintf("Desde %i hasta %i" ,Ni,Nf);
          for(int cont=Ni;cont<=Nf;cont++)
                 { if(cont%2==0)
                  {sum_p=sum_p+Ni;}
                  else
                  {sum_imp=sum_imp+Ni;}
                   Ni++;
              } }
                textcolor(2);gotoxy(11,15); cprintf("La suma de pares es: %i",sum_p);
              gotoxy(11,17); cprintf("Y  la de impares es: %i",sum_imp);
              textcolor(12);gotoxy(12,19); cprintf("Ejecuta de nuevo la opcion(s/n): ");cscanf("%s",&salir);
              clrscr(); textcolor(12);
              gotoxy(15,2); cprintf("M E N U   P R I N C I P A L");
              textcolor(13);gotoxy(9,5);
              cprintf("1. Suma de numeros negativos y positivos hasta N");
              gotoxy(9,7);
              cprintf("2. Suma de pares e impares desde N hasta N");
              gotoxy(9,9);
              cprintf("3. Salir");
          }

       while((salir=='s')||(salir=='S'));

       }

void TRES()
{}

main()
{
    int op,cant,Num,sumN,sumP;char salir='s';
    textbackground(7);clrscr();
    do
    {clrscr();textcolor(12);
    gotoxy(15,2); cprintf("M E N U   P R I N C I P A L");
    textcolor(13);gotoxy(9,5);
    cprintf("1. Suma de numeros negativos y positivos hasta N");
    gotoxy(9,7);
    cprintf("2. Suma de pares e impares desde N hasta N");
    gotoxy(9,9);
    cprintf("3. Salir");


    textcolor(12);
    gotoxy(15,11);
    cprintf("Elija Opcion: ");textcolor(0); cscanf("%i",&op);
    switch(op)
     {
         case 1: UNO(); break;
         case 2: DOS(); break;


     }
       textcolor(12);gotoxy(12,19); cprintf("Ejecuta de nuevo el programa(s/n): ");cscanf("%s",&salir);
     }
       while((salir=='s')||(salir=='S'));
      gotoxy(15,22); cprintf("...Gracias y hasta pronto...");
       gotoxy(22,26); cprintf("Enter...");
       getch(); getch();
}

