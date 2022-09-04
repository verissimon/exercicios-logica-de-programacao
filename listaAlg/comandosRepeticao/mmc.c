#include <stdio.h>

void main(){
    int n1, n2, n3, mmc=1, div=2;
    scanf("%d%d%d", &n1, &n2, &n3);
    while(n1>1 || n2>1 || n3>1){
        while(n1%div==0 || n2%div==0 || n3%div==0){ 
            mmc=mmc*div;
            if(n1%div==0) n1=n1/div;
            if(n2%div==0) n2=n2/div;
            if(n3%div==0) n3=n3/div;
        }
        div++;
    }
    printf("%d eh o mmc", mmc);
}