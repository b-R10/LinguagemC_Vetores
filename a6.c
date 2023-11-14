/*
Inicialize com ‘\0’ um vetor de caracteres de 10 posições. Insira caracteres e imprima
apenas as posições cujo valor é vogal
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    
    char a[10]={'\0'}, b[5]={'a','e','i','o','u'};
    int i, j, flag;

    // inserir caracteres
    for(i=0; i<10; i++){
        printf("\nInsira o caracter para posição %d:", i);
        scanf(" %c", &a[i]);
    }
    
    // conferir e imprimir caso vogal
    for(i=0; i<10; i++){
        flag = 0;
        for(j=0; j<5; j++){
            if(a[i] == b[j] || a[i] == b[j] + 32){        // na tabela ASCII a diferença de um caracter com seu correspondente maiúsculo
                flag = 1;                                 // é de 32. Ex. valor ASCII de 'A' = 65, de 'a' = 97 (65+32) 
                break;
            }
        }
        if(flag == 1){
            printf("%c", a[i]);
        }else{
            printf("-");
        }
    }
    return 0;
}