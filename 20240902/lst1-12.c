#include <stdio.h>

int main () {
    double vel, esp, trb, maston, maskg, acl, seg, hor;
    scanf("%lf%lf%lf", &maston, &acl, &seg);
    maskg= maston*1000;
    vel=acl*seg;
    trb=(maskg*vel*vel)/2;
    vel= vel*3.6;
    esp=(acl*seg*seg)/2;

    printf("VELOCIDADE = %.2lf\n", vel);
    printf("ESPACO PERCORRIDO = %.2lf\n", esp);
    printf("TRABALHO REALIZADO = %.2lf\n", trb);

    return 0;
}