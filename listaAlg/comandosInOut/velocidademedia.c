#include <stdio.h>

void main()
{
    float distKM, tempoH, veloMed;
    printf("insira a distancia em km e o tempo em horas: ");
    scanf("%f%f", &distKM, &tempoH);
    veloMed = (distKM/tempoH)/3.6;
    printf("a velocidade em metros por segundo eh: %.3f", veloMed);
}
