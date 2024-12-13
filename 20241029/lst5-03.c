#include <stdio.h>

int main(){
    int n, num, i, j;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=n; j>=1; j--){
            scanf("%d", &num);
            if(i==j){
                printf("%d\n", num);
            }
        }
    }
    return 0;
}