#include <iostream>
#include <stdio.h>
int main()
{
    int t;
    char a[5]={'A','B','C','D','E'};
    while(scanf("%d",&t))
    {
        if(t==0) break;
        while(t--)
        {
            int n[5];
            for(int i=0;i<5;i++)
            {
                scanf("%d",&n[i]);
            }
            int ans,c=0;
            for(int i=0;i<5;i++)
            {
                if(n[i]<=127)
                {
                    ans=i;
                    c++;
                } 
            }
            if(c==1) printf("%c\n", a[ans]);
            else printf("*\n");
        }
    }
    
    return 0;
}