#include <iostream>
#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0) break;
        int x,y,ans=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&x,&y);
            if(y%2==0) ans+=y;
            else ans+=(y-1);
        }
        printf("%d\n",ans/4);
    }

    return 0;
}