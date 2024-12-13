    #include <stdio.h>
     
    double absoluto (double n, double r){
        double mod;
     
        mod= n-(r*r);
        if(mod<0){
            mod=mod*(-1);
        }

        return mod;
    }

    void raiz (double n, double e, double * r){
        double temp, rk;
        temp = *r;
        rk=(temp+(n/temp))/2;
        *r=rk;
    }
     
    int main(){
        double n, e, x, r=1;
     
        scanf("%lf%lf", &n, &e);
     
        x=absoluto(n,r);
     
        while(x>e){
            raiz(n, e, &r);
            x=absoluto(n,r);
            printf("r: %.9lf, err: %.9lf\n", r, x);
        }
     
        return 0;
    }
