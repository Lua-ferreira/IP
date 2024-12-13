    #include <stdio.h>
     
    int main (){
        long int n, p, i, sp, si;
        double fp, fi, fsp, fsi, mp, mi;
        p=0; i=0;
        sp=0; si=0;
     
        while (1){
            scanf("%ld", &n);
            if(n==0)
                break;
     
            if(n%2==0){
                sp += n;
                p++;
            }
            else{
                si += n;
                i++;
            }
        }
        fp=p; fi=i;
        fsp=sp; fsi=si;
        if(p>0 && i>0){
            mp=fsp/fp;
            mi=fsi/fi;
            printf("MEDIA PAR: %.6lf\nMEDIA IMPAR: %.6lf\n", mp, mi);
        }
        else if(p>0){
            mp=fsp/fp;
            mi=0;
            printf("MEDIA PAR: %.6lf\nMEDIA IMPAR: %.6lf\n", mp, mi);
        }
     
        else if(i>0){
            mp=0;
            mi=fsi/fi;    
            printf("MEDIA PAR: %.6lf\nMEDIA IMPAR: %.6lf\n", mp, mi);
        }
        else{
            mp=0;
            mi=0;   
            printf("MEDIA PAR: %.6lf\nMEDIA IMPAR: %.6lf\n", mp, mi);
        }
     
        return 0;
    }