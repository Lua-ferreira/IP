#include <stdio.h>
#include <string.h>

int main() {
    int i, n, leds, testes, tamanho;
    int vetor[1000];
    char numero[1000];  // Declaração de um array para armazenar o número como string

    scanf("%d", &testes);

    for(n=0; n<testes; n++){
        scanf("%s", numero);
        leds=0;
        tamanho = strlen(numero);

        for(i=0; i<tamanho; i++){
            vetor[i]=numero[i]-'0';
        } //convertendo p int

        for(i=0; i<tamanho; i++){
            switch(vetor[i]){
                case 1:
                    leds+=2;
                    break;
                
                case 2:
                    leds+=5;
                    break;
                
                case 3:
                    leds+=5;
                    break;
                
                case 4:
                    leds+=4;
                    break;
                
                case 5:
                    leds+=5;
                    break;
                
                case 6:
                    leds+=6;
                    break;
                
                case 7:
                    leds+=3;
                    break;
                
                case 8:
                    leds+=7;
                    break;
                
                case 9:
                    leds+=6;
                    break;
                
                case 0:
                    leds+=6;
                    break;
            
                default:
                    break;
            }
        }
        printf("%d leds\n", leds);
    }

    return 0;
}
