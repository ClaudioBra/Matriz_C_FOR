#include <stdio.h>
#include <stdlib.h>
#define DIM 5

int main()
{
   int vetor[DIM];
   int i, num;

   printf("Este programa gera um vetor contendo numeros inteiros.\n");
   printf("Entre com o numero inicial do conjunto. ");
   scanf("%d", &num);

   for(i = 0; i < DIM; i++)
   vetor[i] = num++;

   for(i = 0; i < DIM; i++)
   printf(" %d = %d\n", i, vetor[i]);

    return 0;
}
