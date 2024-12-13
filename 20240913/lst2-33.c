#include <stdio.h>

int main (){
    unsigned long int NS;
    unsigned long int nsd1, nsd2, nsd3, nsd4, nsd5, nsd6, nsd7, nsd8;
    unsigned long int somapond1, somapond2;
    int DV1, DV2, UF, ufd1, ufd2;

    scanf("%ld%d", &NS, &UF);

    //separação do Numero Sequencial em digitos
    nsd1=NS/10000000;
    nsd2=(NS/1000000)-(nsd1*10);
    nsd3=(NS/100000)-(nsd2*10)-(nsd1*100);
    nsd4=(NS/10000)-(nsd3*10)-(nsd2*100)-(nsd1*1000);
    nsd5=(NS/1000)-(nsd4*10)-(nsd3*100)-(nsd2*1000)-(nsd1*10000);
    nsd6=(NS/100)-(nsd5*10)-(nsd4*100)-(nsd3*1000)-(nsd2*10000)-(nsd1*100000);
    nsd7=(NS/10)-(nsd6*10)-(nsd5*100)-(nsd4*1000)-(nsd3*10000)-(nsd2*100000)-(nsd1*1000000);
    nsd8=NS-(nsd7*10)-(nsd6*100)-(nsd5*1000)-(nsd4*10000)-(nsd3*100000)-(nsd2*1000000)-(nsd1*10000000);

    //printf("%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n", nsd1, nsd2, nsd3, nsd4, nsd5, nsd6, nsd7, nsd8);

    //calculo do primeiro digito do DV
    somapond1=(nsd1*2)+(nsd2*3)+(nsd3*4)+(nsd4*5)+(nsd5*6)+(nsd6*7)+(nsd7*8)+(nsd8*9);
    DV1=somapond1%11;
    if(DV1==10)
        DV1=0;

    //separação digitos UF
    ufd1=UF/10;
    ufd2=UF-(ufd1*10);

    //calculo do segundo digito do DV
    somapond2=(ufd1*7)+(ufd2*8)+(DV1*9);
    DV2=somapond2%11;
    if(DV2==10)
        DV2=0;

    if(UF>0 && UF<29){
        printf("%ld%d%d/%d%d\n", NS, ufd1, ufd2, DV1, DV2);
    }   
    else
        printf("CODIGO DA UF INVALIDO!\n");

    return 0;
}