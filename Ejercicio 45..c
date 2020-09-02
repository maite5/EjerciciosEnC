#include <stdio.h>
#include <string.h>
main() {
int legajo,leg_a,apro=0,dic=0,marzo=0,i=0;
float promedio,m_promedio;
char nombre[10],c='s',m_alumno[10];
while (c=='s') {
	printf ("Ingrese numero de legajo: \n");
	scanf ("%d",&legajo);
	printf ("ingrese nombre:\n ");
	fflush (stdin);
	fgets (nombre,10,stdin);
	
	printf ("Ingrese promedio: \n");
	scanf ("%f",&promedio);
	
	if (promedio <4) { marzo++; }
	else if (promedio>=4 && promedio<7) { dic++; }
	else if (promedio >=7) { apro++;}
	if (i==0) {
	
	leg_a=legajo;
	strcpy(m_alumno,nombre);
	m_promedio=promedio;
	}
	else {
	
		if (promedio>m_promedio) 
		{leg_a=legajo;
		strcpy (m_alumno,nombre);
		m_promedio=promedio;
		}
	}
	i++;
	printf ("continuar s/n? ");
	scanf ("%c",&c);
	
}
printf ("alumnos aprobados: %d\n alumnos rinden en diciembre: %d\n alumnos rinden en marzo: %d n",apro,dic,marzo);
printf ("\nnumero de legajo: %d\n nombre:%s ",leg_a,m_alumno);
}
