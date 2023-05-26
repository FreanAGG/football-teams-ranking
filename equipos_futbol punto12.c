/* EQUIPOS DE FUTBOL

Se ingresaran (en un orden cualquiera) los datos de 16 equipos de futbol, compuestos por código del equipo (int) y cantidad de puntos (int).
Mostrar la tabla de posiciones (ordenada) y a continuacion el fixture de la primera fecha de playoffs, es decir, los partidos entre el primero y el ultimo, 
el segundo y el anteultimo. */

#include <stdio.h>
#define N 16

int main () 
{
	int codigo[N], puntos[N];
	int auxc, auxp; 
	int i, j; 
	
for(i = 0 ; i < N ; i++) 
{	
	printf("\n\n\tCodigo de competidor: ");
	scanf("%d", &codigo[i] );						
	
	printf("\n\n\tIngrese puntos: ");
	fflush (stdin);									//Limpia el buffer del teclado.
	scanf("%d", &puntos[i] );
	
}	
	/* TABLA DE POSICIONES */
	/* Ordeno los vestores por PUNTOS*/	
	for (i = 0; i < N; i++) 
		for (j = 0; j < N-i-1; j++)
		if (puntos [j] > puntos[j+1])				 
			{
				auxp = puntos[j];					// Asignaciones de izquierda a derecha. 
				puntos[j] = puntos [j+1];
				puntos[j+1] = auxp;
			}

	printf("\n\t\t %s %14s \n", "COMPETIDOR", "PUNTOS");

/* Barrido para mirar los datos */

for(i = 0 ; i < N ; i++)  
{
	printf("%25d %14d\n", codigo[i], puntos [i]);
}
	
	/*FIXTURE */

	printf("\n\n\t\t %s \n", "FIXTURE");
for (i = 0; i < N/2; i++) 
{
	printf("\n%18d vs %d\n", codigo[i], codigo[N-i-1]);
}

}

