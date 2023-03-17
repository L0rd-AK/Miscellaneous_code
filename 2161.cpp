#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    double sum=0.0;
    while(n--)
    {
        sum+=6.0;
        sum=1.0/sum;
    }
    sum+=3.0;
    printf("%.10lf\n",sum);

    return 0;
}