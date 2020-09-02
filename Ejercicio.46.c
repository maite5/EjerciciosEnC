#include <stdio.h>
int main ()
{
int i,n1,n2,suma=0,resta=0,multiplicacion=0,division=0;
int opc;
char s,S;

do 
{
Printf ("\nCalculadora");
printf ("\n Suma   Resta   Multiplicaciòn  Division");
printf("\nIngrese un numero : ");
scanf ("%i",&n1);

printf("\nIngrese otro numero : ");
scanf ("%i",&n2);

printf ("\nQue operacion desea realizar?: \n1.Suma \n2.Resta \n3.Multiplicacion \n4.Division: ");
scanf("%i",&opc);

switch (opc){

case 1: printf ("\n %i",n1+n2); break;

case 2: printf ("\nLa resta es %i",n1-n2); break;

case 3:printf ("\n %i",n1*n2); break;

case 4: printf ("\n %i",n1/n2);break;

default: printf ("opc Incorrecto");break;

}

printf ("\nDesea continuar s: ");
scanf ("%c",&s);

}while(s==S|| S==s);


}














