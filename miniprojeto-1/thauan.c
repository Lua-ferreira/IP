#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int operacao(char c){
    int cont=0;

    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%' || c=='~')
        cont=1;
    
    if(c=='=' || c=='!' || c=='<' || c=='>')
        cont=2;

    if(c=='^' || c=='v' || c=='x'){
        return 3;
        printf("cont %d\n", cont);
    }

} //verifica qual operação o programa irá realizar e seta um contador para o caso de a operação ser inválida

double aritmetico(double num1, char operador, double num2){
    double resultado=0;
    int n1, n2;

    switch (operador){
    case '+':
        resultado=num1+num2;
        break;
    
    case '-':
        resultado=num1-num2;
        break;

    case '*':
        resultado=num1*num2;
        break;

    case '/':
        resultado=num1/num2;
        break;

    case '%':
        n1=num1;
        n2=num2;
        resultado=n1%n2;
        break;

    case '~':
        resultado=pow(num1,num2);
        break;
    
    default:
        break;
    }

    return resultado;
} //realiza a operação aritmética

bool relacional(double num1, char operador, double num2){
    bool resultado=false;
    
    switch (operador){
    case '=':
        resultado= (num1==num2);
        break;

    case '!':
        resultado= (num1!=num2);
        break;

    case '<':
        resultado= (num1<num2);
        break;

    case '>':
        resultado= (num1>num2);
        break;
    
    default:
        break;
    }    

    return resultado;
} //realiza a operação relacional

bool logico(int num1, char operador, int num2){
    bool resultado=false;
    
    switch (operador){
    case '^':
        resultado= (num1&&num2);
        break;

    case 'v':
        resultado= (num1||num2);
        break;

    case 'x':
        resultado= (num1^num2);
        break;
    
    default:
        break;
    }

    return resultado;
} //realiza a operação lógica


int main(){
    double num1, num2;
    char operador, c;
    double resultado_a;
    bool resultado_b;
    int caasoo=0, cont=0;

    scanf("%lf%c%lf", &num1, &operador, &num2);
    /*printf("numero 1: %lf\n", num1);
    printf("operador: %c\n", op);
    printf("numero 2: %lf\n", num2);*/

    //caso=operacao(operador);

    c=operador;

    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%' || c=='~')
        cont=1;
    
    if(c=='=' || c=='!' || c=='<' || c=='>')
        cont=2;

    if(c=='^' || c=='v' || c=='x'){
        cont=3;
    }

    if(cont==1){
        resultado_a=aritmetico(num1, operador, num2);
        printf("%g\n", resultado_a);
    }
    
    if(cont==2){
        resultado_b=relacional(num1, operador, num2);
        printf("%s\n", resultado_b ? "true" : "false");
    }

    if(cont==3){
        resultado_b=logico(num1, operador, num2);
        printf("%s\n", resultado_b ? "true" : "false");
    }

    if(cont==0)
        printf("Expressao invalida!\n");

    return 0;
}