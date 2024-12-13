    #include <stdio.h>
    #include <math.h>
     
    int main (){
        unsigned long int n;
        double h2, c12, c22, h, c1, c2;
     
        scanf("%ld", &n);
     
        if(n>0){
            for(h=1; h<=n; h++){
                for(c1=1; c1<n; c1++){
                    for(c2=n; c2>0; c2--){
                        h2=pow(h,2);
                        c12=pow(c1,2);
                        c22=pow(c2,2);
                        if(h2==c12+c22){
                            if(c1<=c2){
                                printf("hipotenusa = %.0lf, catetos %.0lf e %.0lf\n", h, c1, c2);
                            }
                        }
                    }
                }        
            }
        }
        return 0;
    }


/*#include <stdio.h>

int main (){
    int n, h, c1, c2;

    scanf("%d", &n);

    //if(n>0){
        for(h=0; h<=n; h++){
            for(c1=n; c1>1; c1--){
                for(c2=2; c2<=c1; c2++){
                    if((h*h)==(c1*c1)+(c2*c2)){
                        //if(c1<=c2){
                            printf("hipotenusa = %d, catetos %d e %d\n", h, c2, c1);
                        //}
                    }
                }
            }        
        }
    //}
    return 0;
}*/