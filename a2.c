/*
Faça uma solução para computar a nota de 10 alunos. Ao término do algoritmo, mostrar as notas cujo valor tenha sido superior à média de notas da turma.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i;
    float notas[10], media=0;
    for(i=0; i<10; i++){
        printf("\nDigite a nota do aluno %d:", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
        while(notas[i]<0 || notas[i]>10)
        {
            printf("\nDigite a nota do aluno %d:", i+1);
            scanf("%f", &notas[i]);
        }
    }
    media = media/i;
    for(i=0; i<10; i++){
        if(notas[i] > media){
            printf("\n%f", notas[i]);
        }
    }
    return 0;
}