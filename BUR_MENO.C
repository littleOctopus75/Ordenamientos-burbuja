#include <stdio.h>
#include <stdlib.h>

int main (void){
int a[20], i,j,aux, n, cont=0,cont1=0,b[20];

printf ("Ingrese el numero de datos: ");
scanf ("%d", &n);

printf ("Ingrese los numeros: ");
for (i=0; i<n; i++){
scanf ("%d",&a[i]);
b[i]=a[i];
}

for(i=1; i<n; i++){
	for(j=n-1; j>=1; j--){
	cont++;
		if (a[j-1]>a[j]){
			cont1++;
			aux=a[j-1];
			a[j-1]=a[j];
			a[j]=aux;
		}
	}
}
printf("Los numeros ingresados son: ");
for(i=0; i<n; i++){
	printf ("%d  ", b[i]);
}
printf("\n");
printf ("El resultado es: ");
for(i=0; i<n; i++){
	printf ("%d  ", a[i]);
}
printf("\nEl numero total de veces que se hizo la comparacion %d", cont);
printf("\nEl numero total de vcambios %d\n", cont1);
system ("pause");
system ("cls");

}
