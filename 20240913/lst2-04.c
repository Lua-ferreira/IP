#include <stdio.h>

int main (){
    int n, i;
    double C, F;

    scanf("%d", &n);

    for (i=n; i>0; i--){
        scanf("%lf", &F);
        C = (5*(F-32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F, C);  
    }

    return 0;
}