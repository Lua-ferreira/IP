#include <stdio.h>

int main (){
    int qde, num, i, ant=0, cont, contnao=1; //cont 0 decrescente cont 1 crescente

    while ((scanf("%d", &qde))!=0){
        if(qde==0 || qde<3) break;
        for(i=0; i<qde; i++){
            scanf("%d", &num);
            if(i==0)
                ant=num;
            else if(i==1){
                cont = (num>ant) ? 0:1;
                if(ant==num)
                    contnao=0;
            }
            else if(i>1 && cont==0){
                if(i%2==0 && num>=ant)
                    contnao=0;
            }
            else if(i>1 && cont==1){
                if(i%2==0 && num<=ant)
                    contnao=0;
            }
            
            ant=num;
        }
        if(contnao==0)
            printf("Nao intercalada\n");
        else
            printf("Intercalada\n");
        contnao=1;
        ant=0;
    }
    
    return 0;
}