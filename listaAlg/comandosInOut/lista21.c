#include <stdio.h>

void main()
{
    printf("ola mundo ");
    float pp; // preço de produção
    float ml; // margem de lucro
    
    printf("Informe o preco de producao e margem de lucro (\%) desejada: ");
    scanf("%f", &pp);
    scanf("%f", &ml);
    float pv = pp / (1-ml/100); //margem de lucro aplicada ao preco
  //  float pv = pp*(1+ml/100); //margem de lucro aplicada ao custo 
    printf("O valor do preco de venda deve ser: %f", pv);
}
