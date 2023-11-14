/*
Faça uma solução para inserir valores de 0 a 9 em um vetor de 10 elementos. Ao término, exibir seus valores.
Use laço de repetição para a inserção dos valores e para exibí-los.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, vetor[10];
    for(i=0; i<10; i++){
        vetor[i] = i;
    }
    for(i=0; i<10; i++){
        printf("%d\t", vetor[i]);
    }
    return 0;
}