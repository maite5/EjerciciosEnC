//#include <stdio.h>
//main () {
void maximo (float tmax,float *TMAX, int fecha[],int fechamax[]) {
		if (tmax>=*TMAX)
		{
	*TMAX=tmax;
	memcpy (fechamax,fecha,sizeof(int)*3);
	}
	}
	
void minimo (float tmin,float *TMIN,int fecha [],int fechamin [])
{
	if (tmin<=*TMIN)
	{
		*TMIN=tmin;
		memcpy (fechamin,fecha,sizeof (int)*3);
		}
}
main () {
	int cont=0,fecha [3], fechamax [3], fechamian[3];
	float tmax,tmin,TMAX,TMIN;
		printf ("Ingrese datos. Ingrese '0' para terminar");
	do
	{	
	printf ("\ningrese dia: ");
	scanf ("%i",&fecha[0]);
	if (fecha[0]==0)break;
		printf ("\ningrese mes: ");
	scanf ("%i",&fecha [1]);
		printf ("\ningrese ano: ");
	scanf ("%i",&fecha [2]);
		printf ("\ningrese temperatura mas baja: ");
	scanf ("%g",&tmin);
		printf ("\ningrese temperatura mas alta : ");
	scanf ("%g",&tmax);
	if (cont==0)
	{
		TMIN=tmin;
		TMAX=tmax;
		
	}
//	if (tmax>tmax || cont==0)
	
	
	}





