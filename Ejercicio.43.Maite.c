#include <stdio.h>
main () {
char nom [30],c='y',i;
	
int n,x;
float edad,dep[]={0,0,0,0,0,0},prom[]={0,0,0,0,0,0};
do	
{
	printf ("Ingrese numero de socio: ");
	scanf ("%d",&n);
	printf ("Ingrese apellido y nombre: ");
	fflush (stdin);
	fgets (nom,30,stdin);
	printf ("Ingrese edad: ");
	scanf ("%d",&edad);
	printf("\nSeleccione el tipo de deporte que practica.");
	printf("1.Tenis\n2Rugby\n3.Voley \n4.Hockey \n5.Futbol \n6.Paddle\nOpcion numero: ");
	switch (x)
	{
	    case 1:dep [0]++;prom[0]+=edad;break;
	    case 2:dep [1]++;prom[1]+=edad;break;
	    case 3:dep [2]++;prom[2]+=edad;break;
		case 4:dep [3]++;prom[3]+=edad;break;
		case 5:dep [4]++;prom[4]+=edad;break;
		case 6:dep [5]++;prom[5]+=edad;break;
		default: ;
		
	}
    printf ("\n\nDesea continuar ingresando datos? y /n: ");
    fflush(stdin);
    scanf("%c",&c);
    }
	if (dep[i]==0)
	dep[i]++;
	}
	printf ("\nJugadores que practican Tenis: %g",dep[0]);
	printf ("\n:Jugadores que practican Paddle:%g",dep[5]);
	printf ("\n:Promedio de edad segun deporte: ");
	printf ("\n:Tenis:%gRugby: &g\n",prom[0]/dep[0],prom[1]/dep[1]);
	printf ("\n:Voley: %g \nHockey: %g\n",prom[2]/dep[2],prom[3]/dep[3]);
	printf ("Futbol: %g\nPaddle: %g",prom[4]/dep[4],prom[5]/dep[5]);

}
