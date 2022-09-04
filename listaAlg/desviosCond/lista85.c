#include <stdio.h>
void main(){
    float n1, n2;
    char op; // operador (+, -, *, /)

    scanf("%f%f", &n1, &n2);
    fflush(stdin);
    scanf("%c", &op); //limpa buffer do teclado
    switch(op){
        case '+': printf("%.1f + %.1f = %.1f", n1, n2, n1+n2); break;
        case '-': printf("%.1f - %.1f = %.1f", n1, n2, n1-n2); break;
        case '*': printf("%.1f * %.1f = %.1f", n1, n2, n1*n2); break;
        case '/': if(n2!=0){
                  printf("%.1f / %.1f = %.1f", n1, n2, n1/n2);
                    }
                    else printf("resultado indefinido"); break;
    
        default: printf("operador invalido");
    }
}