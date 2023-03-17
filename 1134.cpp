#include <iostream>
#include <stdio.h>
int main()
{
    int t,a=0,g=0,d=0;
    printf("MUITO OBRIGADO\n");
    while(scanf("%d",&t))
    {
        if(t==4) break;
        if(t==1) a++;
        if(t==2) g++;
        if(t==3) d++;

    }
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);


    return 0;
}