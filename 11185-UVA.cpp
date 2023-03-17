
#include <iostream>
#include <stdio.h>
int main()
{
    long long int t;

    while(scanf("%lld",&t))
    {
        if(t<0) break;
        if(t==0)
        {
            printf("0\n");
            continue;
        }
        long long int a[100000],count=0;
        for(int i=0;t!=0;i++)
        {
            a[i]=0;
            count++;
            a[i]=t%3;
            t=t/3;
        }
        for(int i=count-1;i>=0;i--)
        {
            printf("%lld",a[i]);
        }
        printf("\n");
    }

    return 0;
}