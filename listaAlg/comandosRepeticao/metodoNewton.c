#include <stdio.h>
#include <math.h>
const float PREC=0.0001;

void main(){
    float n, m, x=1, xAnt=0;
    scanf("%f%f", &n, &m);
    printf("f(x)=x^%.0f - %.1f ", n, m);
    printf("e f'(x)=%.0fx^(%.0f)\n", n, n-1);
    while(x-xAnt>PREC || xAnt-x>PREC){
        xAnt = x;
        x = x-(pow(x, n)-m)/(n*pow(x, n-1));
    }
    printf("a raiz eh: %.4f", x);
}