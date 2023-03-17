#include <iostream>
#include <stdio.h>
int main()
{
    int t;
    while(scanf("%d",&t))
    {
        if(t==0) break;
        int ans=0;
        while(1)
        {
            int n,c=0;
            for(int i=1;i<=t;i++)
            {
                scanf("%d",&n);
                if(n==i) c++;
            }
            ans++;
            if(c==t) break;
        }
        printf("%d\n",ans);
    }
}
