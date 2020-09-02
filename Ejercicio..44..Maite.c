#include <stdio.h>
main () {
int anio;
printf ("Ingrese ano: ");
scanf ("%i",&anio);
if (anio%4==0 && anio %100 !=0 || anio %400==0)

printf ("\nEs bisiesto");

 else 
 printf ("\nNo es bisiesto");  
 return 0;


}
