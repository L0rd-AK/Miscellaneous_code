#include <iostream>
#include <stdio.h>
int main()
{
    int t;
    while(scanf("%d",&t))
    {
        if(t==0) break;
        int a[t],sum=0,sum2=0,count=0;
        for(int i=0;i<t;i++)
        {
            a[i]='\0';
            scanf("%d",&a[i]);
        }
        for(int i=1;i<t-1;i++)
        {
           if(a[i]>a[i+1]&&a[i]>a[i-1]||a[i]<a[i+1]&&a[i]<a[i-1])
           {
                count++;
           }
        }
        if(a[0]>a[t-1]&&a[0]>a[1]||a[0]<a[t-1]&&a[0]<a[1]) count++;
        if(a[t-1]>a[0]&&a[t-1]>a[t-2]||a[t-1]<a[0]&&a[t-1]<a[t-2]) count++;
        printf("%d\n", count);
        count=0;
    }

    return 0;
}