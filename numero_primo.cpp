#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //usar acentos

int main ()	
{ setlocale(LC_ALL,""); //usar acentos
	
int n,
	cont,
	d,
	np;
	
	printf("N�meros Primos\n");
	printf("Vamos descobrir os n�meros primos?\n");
	printf("Informe a quantidade de n�meros de primos:\n");
	scanf("%d", &n);
	
	np=2;
	cont=0;
	d=1;
	
	for (d=1; d<=np; d++)			
{  	if (np % d==0)
{ 	printf("%d, ", np);
	cont = cont + 1; }
}
return 0; }
