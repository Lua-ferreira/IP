#include <stdio.h>

void fibonacci(int t1, int t2, int n, int *fibo){
    int i;

    for(i=0; i<(n-2); i++){
        *fibo=t1+t2;
        t1=t2;
        t2=*fibo;
    }
}

int main(){
    int fibo;
    int t1, t2;
    int n;

    scanf("%d%d%d", &t1, &t2, &n);

    fibonacci(t1, t2, n, &fibo);

    printf("%d\n", fibo);

    return 0;
}