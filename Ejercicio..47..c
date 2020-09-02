#include <stdio.h>
main () {
	int anio,a,b,c,d,e,dia;
	printf ("ingrese anio: "); 
	scanf ("%i",&anio);
	a=anio%19;
	b=anio%4;
	c=anio%7;
	d=(19*a+24) %30;
	e=(2*b+4*c+6*d+5) %7;
	dia= 22+d+e;
	printf ("Fecha del domingo de pascua de %i es: %i ");
	if (dia<=31)
	printf ("%d de marzo",dia);
	else
	printf ("%d de abril",dia-31);
	
}
