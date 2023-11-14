/*
\0 == vazio(null)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    for(int i=0; i<10; i++)
    {
        printf("\nDigite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<10; i++)
    {
        printf("\t\n V[%d] = %d \n", i, vetor[i]);
    }
    return 0;
}