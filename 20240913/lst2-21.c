#include <stdio.h>

int main (){
    int n, num1, num2, numin1, numin2, n1dig1, n1dig2, n1dig3, n2dig1, n2dig2, n2dig3, i;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d%d", &num1, &num2);
        
        n1dig1=num1/100;
        n1dig2=(num1/10)-(n1dig1*10);
        n1dig3=num1-(n1dig1*100)-(n1dig2*10);

        n2dig1=num2/100;
        n2dig2=(num2/10)-(n2dig1*10);
        n2dig3=num2-(n2dig1*100)-(n2dig2*10);

        numin1= (n1dig3*100)+(n1dig2*10)+n1dig1;
        numin2= (n2dig3*100)+(n2dig2*10)+n2dig1;

        if(numin1>=numin2)
            printf("%d\n", numin1);
        else
            printf("%d\n", numin2);
    }

    return 0;
}