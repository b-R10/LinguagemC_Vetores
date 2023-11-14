/*
Inicialize dois vetores de inteiros de mesmo tamanho.
Some o conteúdo dos dois vetores e armazene o resultado em um terceiro vetor, na respectiva posição.
Imprima os elementos do terceiro vetor
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, v1[1]={3}, v2[1]={4}, v3[3];
    for(i=0; i<3; i++){
        if(i==0){
            v3[i] = v1[0];
        }else if(i==1){
            v3[i] = v2[0];
        }else{
            v3[i] = v1[0]+v2[0];
        }
    }
    for(i=0; i<3; i++){
        printf("\nPosição %d: %d", i+1, v3[i]);
    }
    return 0;
}


// int main(){
//     int n, i;
//     setlocale(LC_ALL, "portuguese");
//     printf("Digite o tamanho dos vetores: ");
//     scanf("%i", &n);
//     int v1[n], v2[n], v3[n+n];
//     for(int b=0; b<2; b++){
//         printf("\nInsira os valores para o vetor %d:", b+1);
//         if(b=0){
//             for(int a=0; a<n; a++){
//                 printf("\n\tInsira o valor da posição %d: ", a+1);
//                 scanf("%d", &v1[a]);
//             }
//         }
//         if(b=1){
//             for(int a=0; a<n; a++){
//                 printf("\n\tInsira o valor da posição %d: ", a+1);
//                 scanf("%d", &v2[a]);
//             }
//         }
//     }
//     for(i=0; i<n; i++){
//         v3[i] = v1;
//     }
//     for(i=n; i<(2*n); i++){
//         v3[i] = v2;
//     }
//     for(i=0; i<(2*n); i++){
//         printf("\nPosição %d: %d", i, v3[i]);
//     }
//     return 0;
// }