/*
Faça uma solução para ler 10 valores inteiros. Em seguida, imprima-os na ordem inversa (o último elemento deverá ser o primeiro a ser impresso)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, n[10];
    for(i=0; i<10; i++){
        printf("\nDigite o %dº valor inteiro:", i+1);
        scanf("%d", &n[i]);
    }
    for(i=10; i>0; i--){
        printf("\n %d", n[i-1]);
    }
    return 0;
}