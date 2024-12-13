#include <stdio.h>

int main (){
    int x, y, z, menor, medio, maior, primeiro, segundo, terceiro;
    char a, b, c;

    scanf("%d%d%d%*c%c%c%c", &x, &y, &z, &a, &b, &c);
    //scanf("%c%*c%c%*c%c", &a, &b, &c);

    //printf("%d%d%d%c%c%c", x, y, z, a, b, c);

    if(x<y && x<z){
        menor=x;
        if(y<z){
            medio=y;
            maior=z;
        } //ordem x, y, z
        else{
            medio=z;
            maior=y;
        } //ordem x, z, y
    }

    if(y<x && y<z){
        menor=y;
        if(x<z){
            medio=x;
            maior=z;
        } //ordem y, x, z
        else{
            medio=z;
            maior=x;
        } //ordem y, z, x
    }

    if(z<y && z<x){
        menor=z;
        if(y<x){
            medio=y;
            maior=x;
        } //ordem z, y, x
        else{
            medio=x;
            maior=y;
        } //ordem z, x, y
    }


    if(a=='A')
        primeiro=menor;
    else if(a=='B')
        primeiro=medio;
    else if(a=='C')
        primeiro=maior;

    if(b=='A')
        segundo=menor;
    else if(b=='B')
        segundo=medio;
    else if(b=='C')
        segundo=maior;

    if(c=='A')
        terceiro=menor;
    else if(c=='B')
        terceiro=medio;
    else if(c=='C')
        terceiro=maior;

    printf("%d %d %d\n", primeiro, segundo, terceiro);

    return 0;
}