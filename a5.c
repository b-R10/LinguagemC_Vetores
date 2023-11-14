/*
Dado um vetor de inteiros de tamanho 10, inserir valores e depois trocar seus elementos
de posição da seguinte maneira: trocar o primeiro pelo último, o segundo pelo penúltimo
e assim por diante. Imprima os elementos do vetor. Use variável auxiliar
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int vetor[10], vetor1[10];
    for(int i=0; i<10; i++){
        printf("\nInsira o valor da posição %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<10; i++){
            vetor1[i] = vetor[9-i];
    }
    for(int i=0; i<10; i++){
        printf("\n %d", vetor1[i]);
    }
    return 0;
}