#include <stdio.h>

int main (){
    float n1, n2, n3, n4, primeiro, segundo, terceiro, quarto;

    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    if(n1<=n2 && n1<=n3 && n1<=n4){
        primeiro=n1;
        if(n2<=n3 && n2<=n4){
            segundo=n2;
            terceiro = (n3<=n4) ? n3:n4;
            quarto = (n3<=n4) ? n4:n3;
        } //n1 n2 n3 n4
        else if(n3<=n2 && n3<=n4){
            segundo=n3;
            terceiro = (n2<=n4) ? n2:n4;
            quarto = (n2<=n4) ? n4:n2;
        }
        else if(n4<=n2 && n4<=n3){
            segundo=n4;
            terceiro = (n3<=n2) ? n3:n2;
            quarto = (n3<=n2) ? n2:n3;
        }
    }
    else if(n2<=n1 && n2<=n3 && n2<=n4){
        primeiro=n2;
        if(n1<=n3 && n1<=n4){
            segundo=n1;
            terceiro = (n3<=n4) ? n3:n4;
            quarto = (n3<=n4) ? n4:n3;
        } //n2 n1 n3 n4
        else if(n3<=n1 && n3<=n4){
            segundo=n3;
            terceiro = (n1<=n4) ? n1:n4;
            quarto = (n1<=n4) ? n4:n1;
        }
        else if(n4<=n1 && n4<=n3){
            segundo=n4;
            terceiro = (n3<=n1) ? n3:n1;
            quarto = (n3<=n1) ? n2:n1;
        }
    }
    else if(n3<=n1 && n3<=n2 && n3<=n4){
        primeiro=n3;
        if(n1<=n2 && n1<=n4){
            segundo=n1;
            terceiro = (n2<=n4) ? n2:n4;
            quarto = (n2<=n4) ? n4:n2;
        } //n3 n1 n2 n4
        else if(n2<=n1 && n2<=n4){
            segundo=n2;
            terceiro = (n1<=n4) ? n1:n4;
            quarto = (n1<=n4) ? n4:n1;
        }
        else if(n4<=n2 && n4<=n1){
            segundo=n4;
            terceiro = (n1<=n2) ? n1:n2;
            quarto = (n1<=n2) ? n2:n1;
        }
    }
    else if(n4<=n1 && n4<=n2 && n4<=n3){
        primeiro=n4;
        if(n1<=n2 && n1<=n3){
            segundo=n1;
            terceiro = (n2<=n3) ? n2:n3;
            quarto = (n2<=n3) ? n3:n2;
        } //n4 n1 n2 n3
        else if(n2<=n1 && n2<=n3){
            segundo=n2;
            terceiro = (n1<=n3) ? n1:n3;
            quarto = (n1<=n3) ? n3:n1;
        }
        else if(n3<=n2 && n3<=n1){
            segundo=n3;
            terceiro = (n1<=n2) ? n1:n2;
            quarto = (n1<=n2) ? n2:n1;
        }
    }

    printf("%.2f, %.2f, %.2f, %.2f\n", primeiro, segundo, terceiro, quarto);

    return 0;
}