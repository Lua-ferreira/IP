#include <stdio.h>

int main (){
    unsigned int num, numin;
    int dig1, dig2, dig3, dig4, dig5, x=0;

    scanf("%d", &num);

    if(num>=0 && num<=9) //x=1;
        printf("PALINDROMO\n");
    
    else if(num>=10 && num<100){
        dig1=num/10;
        dig2=num-(dig1*10);

        numin= (dig2*10)+dig1;

        if(num==numin)
            printf("PALINDROMO\n");
        else
            printf("NAO PALINDROMO\n");
    } //x=2;
    
    else if(num>=100 && num<1000){
        dig1=num/100;
        dig2=(num/10)-(dig1*10);
        dig3=num-(dig1*100)-(dig2*10);

        numin= (dig3*100)+(dig2*10)+dig1;

        if(num==numin)
            printf("PALINDROMO\n");
        else
            printf("NAO PALINDROMO\n");
    } //x=3;
    
    else if(num>=1000 && num<10000){
        dig1=num/1000;
        dig2=(num/100)-(dig1*10);
        dig3=(num/10)-(dig1*100)-(dig2*10);
        dig4=num-(dig3*10)-(dig2*100)-(dig1*1000);

        numin= (dig4*1000)+(dig3*100)+(dig2*10)+dig1;

        if(num==numin)
            printf("PALINDROMO\n");
        else
            printf("NAO PALINDROMO\n");
    } //x=4;
    
    else if(num>=10000 && num<100000){
        dig1=num/10000;
        dig2=(num/1000)-(dig1*10);
        dig3=(num/100)-(dig1*100)-(dig2*10);
        dig4=(num/10)-(dig3*10)-(dig2*100)-(dig1*1000);
        dig5=num-(dig4*10)-(dig3*100)-(dig2*1000)-(dig1*10000);

        numin= (dig5*10000)+(dig4*1000)+(dig3*100)+(dig2*10)+dig1;

        if(num==numin)
            printf("PALINDROMO\n");
        else
            printf("NAO PALINDROMO\n");
    } //x=5; 54321
    else
        printf("NUMERO INVALIDO\n");
    
        
    //printf("%d\n", numin);

    return 0;
}