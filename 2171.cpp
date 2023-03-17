#include <iostream>
#include <stdio.h>
int main()
{
    int t,n;
    while(scanf("%d",&t))
    {
        if(t==0) break;
        n=t;
        int fink=0,woody=0;
        while(t<=0)
        {
            for(int i=1,k=1;t<=0;k++)
            {
                woody+=i;t--;
                for(int j=1;j<=k;j++)
                {
                    if(t<=0) break;
                    fink+=j;t=t-j;
                }
            }
            printf("%d %d\n",fink,woody);
        }
    }
    return 0;
}