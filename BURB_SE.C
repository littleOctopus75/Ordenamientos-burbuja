#include <stdio.h>
#include <stdlib.h>

int main (void){
int a[20], i,j,aux, n, band, cont=0, cont1=0, b[20];

printf ("Ingrese el numero de datos: ");
scanf ("%d", &n);
printf ("Ingrese los numeros");
for (i=0; i<n; i++){
	scanf("%d",&a[i]);
	b[i]=a[i];
}

i=0;
band=0;

while((i<=n-2)&&(band==0)){
	band=1;
	for(j=0; j<=n-2; j++){
	cont++;
		if(a[j]>a[j+1]){
			cont1++;
			aux=a[j];
			a[j]=a[j+1];
			a[j+1]=aux;
			band=0;
		}
	}
	i=i+1;
}
printf("El arreglo al principio es: ");
for(i=0; i<n; i++){
	printf ("%d  ", b[i]);
}
printf("\n");
printf ("El resultado es: ");
for(i=0; i<n; i++){
	printf ("%d  ", a[i]);
}
printf ("\nEl numero total de veces que entro al ciclo: %d", cont);
printf ("\nEl numeto total de veces que se hizo un cambio: %d\n",cont1);
system ("pause");
system ("cls");

}
