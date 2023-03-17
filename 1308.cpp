#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int n;double sum,ans;
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        sum=1+8*n;ans=(-1+sqrt(sum))/2;
        printf("%lld\n",(long long int)ans);
    }

    return 0;
}