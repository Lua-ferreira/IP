#include <stdio.h>

int main () {
    float num, ardou1, ardou2, ardou3, arr1, arr2, arr3;
    int arint1, arint2, arint3;
    scanf("%f", &num);

    ardou1=num*10;
    ardou1=ardou1+0.5;
    arint1=ardou1;
    arr1=arint1;
    arr1=arr1/10;

    ardou2=num*100;
    ardou2=ardou2+0.5;
    arint2=ardou2;
    arr2=arint2;
    arr2=arr2/100;

    ardou3=num*1000;
    ardou3=ardou3+0.5;
    arint3=ardou3;
    arr3=arint3;
    arr3=arr3/1000;


    printf("%f\n%f\n%f\n", arr1, arr2, arr3);

    return 0;
}