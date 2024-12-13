#include <stdio.h>

int main (){
    int matricula, horas, i;
    double NF, MP, ML, NT, p, l, pc, lc;
    matricula=0;
    
    while(matricula!=-1){

        scanf("%d", &matricula);
        if(matricula==-1) break;

        p=0;
        l=0;

        for (i=0; i<8; i++){
            scanf("%lf", &pc);
            p+=pc;
        }
        for (i=0; i<5; i++){
            scanf("%lf", &lc);
            l+=lc;
        }

        scanf("%lf%d", &NT, &horas);

        MP = p/8;
        ML = l/5;    
        NF = (MP*0.7)+(ML*0.15)+(NT*0.15);

        if(NT>=6){
            if(horas>=96)
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, NF);
            else
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, NF);
        }
        else{
            if(horas>=96)
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, NF);
            else
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, NF);
        }
    }

    return 0;
}

    /*double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5;

    scanf("%d%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%d", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &NT);

    MP = (p1+p2+p3+p4+p5+p6+p7+p8)/8;
    ML = (l1+l2+l3+l4+l5)/5;*/