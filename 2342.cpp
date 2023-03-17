#include <iostream>
#include <stdio.h>
int main()
{
    int n,a,b,temp=0;
    char c;
    scanf("%d",&n);
    scanf("%d %c %d",&a,&c,&b);
    if(c=='+') temp=a+b;
    else temp=a*b;

    if(n>=temp) printf("OK\n");
    else printf("OVERFLOW\n");

    return 0;
}