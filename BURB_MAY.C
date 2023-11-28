#include <stdio.h>
#include<stdlib.h>

int main (void){
int a[20], i,j,aux, n, cont=0, cont1=0, b[20];

printf ("Ingrese el numero de datos: ");
scanf ("%d", &n);
printf ("Ingrese los numeros");
for (i=0; i<n; i++){
	scanf("%d",&a[i]);
	b[i]=a[i];
}
for(i=n-2; i>=0; i--){
	for(j=0; j<=i; j++){
		cont++;
		if (a[j]>a[j+1]){
			cont1++;
			aux=a[j];
			a[j]=a[j+1];
			a[j+1]=aux;
		}
	}
}
printf("El arreglo ingresado es: ");
for(i=0; i<n; i++){
	printf ("%d  ", b[i]);
}
printf("\n");
printf ("El resultado es: ");
for(i=0; i<n; i++){
	printf ("%d  ", a[i]);
}
printf("\nEl total de veces que se hicieron comparaciones: %d", cont);
printf ("\nEl total de veces que se hicieron cambios: %d\n", cont1);
system ("pause");
system ("cls");

}
