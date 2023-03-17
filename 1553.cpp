#include <iostream>
#include <stdio.h>
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)&&n!=0&&k!=0)
    {
        int x,a[1000];
        for(int i=0;i<1000;i++)
        {
           a[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            a[x]++;
        }
        int size=sizeof(a)/sizeof(a[0]),c=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]>=k) c++;
        }
        printf("%d\n",c);
    }
}