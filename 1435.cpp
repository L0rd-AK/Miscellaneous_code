#include <iostream>
#include <stdio.h>
int main()
{
    int t,l;
    while(scanf("%d",&t))
    {
        if(t==0)  break;
        int a[t][t];
        if(t%2==0) l=t/2;
        else l=(t/2)+1;
        int x=0,y=t-1;
        for(int i=1;i<=l;i++)
        {
            for(int j=x;j<=y;j++)
            {
                for(int k=x;k<=y;k++)
                {
                    a[j][k]=i;
                }
            }
            x++,y--;
        }

        for(int j=0;j<t;j++)
            {
                for(int k=0;k<t;k++)
                {
                    if(k==0) printf("  %d", a[j][k]);
                    else printf("   %d", a[j][k]);
                }printf("\n");
            }
            printf("\n");
    }

    return 0;
}