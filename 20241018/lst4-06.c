#include <stdio.h>
#include <string.h>
 
int main() {
    int n, testes, tamanho, um, dois, tres;
    char linha[6]; 
 
    scanf("%d%*c", &testes);
 
    for(n=0; n<testes; n++){
        scanf("%s", linha);
        tamanho = strlen(linha);
        um=0;
        dois=0;
        tres=0;
        
        if(tamanho==3){
            if(linha[0]=='o') um++;
            if(linha[1]=='n') um++;
            if(linha[2]=='e') um++;
            
            if(linha[0]=='t') dois++;
            if(linha[1]=='w') dois++;
            if(linha[2]=='o') dois++;
        }
        
        if(tamanho==5){
            if(linha[0]=='t') tres++;
            if(linha[1]=='h') tres++;
            if(linha[2]=='r') tres++;
            if(linha[3]=='e') tres++;
            if(linha[4]=='e') tres++;
        }
        
        if(um>1) printf("1\n");
        if(dois>1) printf("2\n");
        if(tres>3) printf("3\n");
    }
 
    return 0;
}