#include <stdio.h>

int main() {
    double dec;
    long int parteinteira, partedecimal, num, den, x, y, temp;

    scanf("%lf", &dec);

    parteinteira = dec;
    partedecimal = dec * 1000000000;
    den = 1000000000;
    num = partedecimal - (parteinteira * den);
    
    if (num == 0) {
        printf("%ld\n", parteinteira);
    } else if(num>0){
        x = num;
        y = den;

        while (y != 0) {
            temp = y;
            y = x % y;
            x = temp;
        } //x recebe MDC
        
        num /= x;
        den /= x;

        if (parteinteira != 0) {
            num += parteinteira * den;
        }
        printf("%ld/%ld\n", num, den);
    }
    else{
        num=num*(-1);
        den=den*(-1);
        x = num;
        y = den;

        while (y != 0) {
            temp = y;
            y = x % y;
            x = temp;
        } //x recebe MDC
        
        num /= x;
        den /= x;

        num=num*(-1);
        den=den*(-1);

        if (parteinteira != 0) {
            num += parteinteira * den;
        }
        printf("%ld/%ld\n", num, den);

    }

    return 0;
}
//2.41771018
//120885509/50000000