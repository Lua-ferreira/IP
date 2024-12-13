#include <stdio.h>

int main (){
    int num1, num2, num3, cont, x, k, i, mmc;
    mmc=1;
    cont=1;

    scanf("%d%d%d", &num1, &num2, &num3);

    for(x=2; 1; x++){
        if(num1==1 && num2==1 && num3==1) break;
        for(i=2; i<(x+1); i++){
            if(x%i!=0 || x==2){
                //printf("NAO PRIMO\n");
                while(cont=1){
                    cont=0;
                    if(num1%x==0 || num2%x==0 || num3%x==0){
                        printf("%d %d %d :%d\n", num1, num2, num3, x);
                        if(num1%x==0)
                            num1/=x;
                        if(num2%x==0)
                            num2/=x;
                        if(num3%x==0)
                            num3/=x;
                        cont=1;
                        mmc*=x;
                    }
                    if(cont==0) break;
            }
            }
        }
    }
    printf("MMC: %d\n", mmc);

    return 0;
}