/*
Fazer uma solução para ler a temperatura diária de uma cidade ao longo do mês
(considere 10 dias). Em seguida, o algoritmo deverá ler as temperaturas e imprimir:
a) A menor temperatura
b) A maior temperatura
c) A temperatura média
d) O número de dias nos quais a temperatura foi abaixo da média
e) As temperaturas abaixo de zero
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float temperatura[10], media=0, maior=0, menor=1000, negativa[5];
    int abaixo=0, j=0;
    for(int i=0;i<10;i++){
        printf("\nInsira a temperatura do dia %d: ", i+1);
        scanf("%f", &temperatura[i]);
        if(temperatura[i]>maior){
            maior = temperatura[i];
        }else if(temperatura[i]<menor){
            menor = temperatura[i];
        }
        media += temperatura[i];
        if(temperatura[i]<0){
            negativa[j] = temperatura[i];
            j++;
        }
    }
    media = media/5;
    for(int i=0;i<10;i++){
        if(temperatura[i]<media)
            abaixo++;
    }
    printf("\nA menor temperatura foi: %.1f"
            "\nA maior temperatura foi: %.1f"
            "\nA temperatura média foi: %.1f"
            "\nNúmero de dias que a temperatura foi abaixo da média: %d", menor, maior, media, abaixo);
    if(j != 0){
        printf("\nTemperaturas abaixo de zero: ");
        for(int i=0;i<j;i++)
            printf("\n\t%.1f", negativa[i]);
    }
    return 0;
}