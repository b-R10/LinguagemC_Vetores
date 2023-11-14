/*
Fazer um algoritmo para armazenar valores inteiros correspondentes a 10 notas dos alunos de uma turma.
O algoritmo deverá validar a nota informada pelo usuário, tal que não seja possível armazenar uma nota fora do intervalo entre 0 e 10.
Em seguida, o algoritmo deverá ler as notas obtidas e imprimir:
    a) A frequência absoluta de cada nota (É o número de vezes em que ela aparece)
    b) A frequência relativa de cada nota (Frequência absoluta dividida pela quantidade notas (alunos))
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
// inserção da quantidade de notas a computar
    int n;
    printf("\nInsira a quantidade de notas a computar: ");
    scanf("%d", &n);
// declaração de variáveis
    int notas[n], auxiliar[n], qntdabsoluta[n];
    float qntdrelativa[n];
// inserção de notas
    for(int i=0; i<n; i++){
        printf("\nInsira a nota %d: ", i+1);
        scanf("%d", &notas[i]);
        while(notas[i]<0 || notas[i]>10){                       // validação da nota inserida
            printf("\nInsira a nota %d: ", i+1);
            scanf("%d", &notas[i]);
        }
        auxiliar[i] = notas[i];
        qntdabsoluta[i] = 0;
    }
// leitura das notas
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(notas[i] == auxiliar[j]){
                qntdabsoluta[i] += 1;
            }
        }
        qntdrelativa[i] = (float)qntdabsoluta[i]/n;
    }
// impressões
    for(int i=0; i<n; i++){
        printf("\nA frequências da nota %d: ", i+1);
        printf("\n\tfrequência absoluta: %d"
                "\n\tfrequência relativa: %.3f", qntdabsoluta[i], qntdrelativa[i]);
    }
    return 0;
}