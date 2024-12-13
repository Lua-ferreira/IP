#include <stdio.h>

int main (){
    int n, ntemp, num, p, inicial, den;

    scanf("%d%d", &inicial, &n);
        
    for(ntemp=inicial; ntemp<=n; ntemp++){    
        num=1;

        for(p=0; p<=ntemp; p++){
            if(p>0)
                printf(",");
            printf("%d", num);

            if(p<ntemp)
                num = num * (ntemp-p)/(p+1);
        }    
    printf("\n");
    }
    return 0;
}