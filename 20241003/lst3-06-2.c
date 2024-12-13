    #include <stdio.h>
     
    double modulo (double n, double r){
        double mod;
     
        mod= n-(r*r);
        if(mod<0){
            mod=mod*(-1);
        }
        return mod;
    }
     
    int main(){
        double n, e, r=1, rk, x;
     
        scanf("%lf%lf", &n, &e);
     
        x=modulo(n,r);
     
        while(x>e){
            rk=(r+(n/r))/2;
            r=rk;
            x=modulo(n,r);
            printf("r: %.9lf, err: %.9lf\n", r, x);
        }
     
        return 0;
    }