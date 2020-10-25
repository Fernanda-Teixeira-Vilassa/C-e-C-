#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{ setlocale(LC_ALL,"");
  int n;       /* candidato a primo           */
  int divisor; /* candidato a divisor de n    */
  int cont;    /* conta o numero de divisores positivos de n */
  
  printf("\n\tTeste de primalidade\n");
  printf("\nDigite um inteiro: ");
  scanf("%d", &n);
  printf ("Candidato a primo = %d\n", n); 

  /* inicializacoes */
  cont = 0;

  /* os candidatos a divisores positivos de n sao 1,2,...,n */
  for (divisor = 1; divisor <= n; divisor++)
{   if (n % divisor == 0) 
	{ cont++; } }
  printf("O inteiro %d ", n);
  
   /* este par de chaves e' superfluo, mas ha' que goste ;-) */
  if (cont == 2)
{   printf("e' primo\n"); }
  else
{   printf("nao e' primo\n");  }
  return 0;  }

