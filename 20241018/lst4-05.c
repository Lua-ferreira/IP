#include <stdio.h>
#include <string.h>
 
int main() {
    int i, n, numletras, vogais, consoantes, testes, tamanho;
    char letras[10001];
    char linha[10001]; 
 
    scanf("%d%*c", &testes);
 
    for(n=0; n<testes; n++){
        fgets(linha, sizeof(linha), stdin);
        tamanho = strlen(linha);
        
       numletras=0;
       vogais=0;
       consoantes=0;
        for(i=0; i<tamanho; i++){
            if((linha[i]>='A' && linha[i]<='Z') || (linha[i]>='a' && linha[i]<='z')){
              letras[numletras]=linha[i];
              numletras++;
           }
        }
        
       for(i=0; i<numletras; i++){
              if(letras[i]=='A' || letras[i]=='E' || letras[i]=='I' || letras[i]=='O' || letras[i]=='U' || letras[i]=='a' || letras[i]=='e' || letras[i]=='i' || letras[i]=='o' || letras[i]=='u'){
              vogais++;
           }
           else
              consoantes++;
       }
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", numletras, vogais, consoantes);
    }
 
    return 0;
}