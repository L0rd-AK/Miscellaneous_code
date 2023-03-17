#include <iostream>
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);

    if(a>=b+c||b>=a+c||c>=a+b) printf("Invalido\n");
    else
    {
        if(a==b&&b==c) printf("Valido-Equilatero\n");
        else if(a!=b&&b!=c&&c!=a) printf("Valido-Escaleno\n");
        else printf("Valido-Isoceles\n");

        if((a*a)==(b*b+c*c)||(b*b)==(a*a+c*c)||(c*c)==(b*b+a*a)) printf("Retangulo: S\n");
        else printf("Retangulo: N\n");
    }

    return 0;
}