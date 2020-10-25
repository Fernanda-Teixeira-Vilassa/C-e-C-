#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //usar acentos

int main ()		{
	setlocale(LC_ALL,"");
	
	int m1,
		m2,
		total,
		resul;
		
	printf("Tabuada\n");
	printf("Responda a tabuada\n");
	printf("Informe qual a tabuada: \n");
	scanf("%d", &m1);
	
	printf(" A tabuada de %d \n", m1);
	
	m1 = m1;
	m2 = m2+1;
	total = m1*m2;
	
	for (m2=1; m2<=10; m2++)	
	{
	printf("\n %d  x  %d  = ", m1, m2);
	scanf("%d", &resul); 
	if (resul == m1*m2) {
		printf("CERTO");
	}	if (resul != m1*m2) 	{
		printf("ERRADO");
	}
	}
	return 0;
	}

