#include <iostream>
#include <stdio.h>
int main()
{
    while(1)
    {
        int t;
        scanf("%d",&t);
        if(t==0) break;
        
        char str[t+1];int ans=1;
        //gets(c);
        for(int i=0;i<=t;i++)
        {
            scanf("%c",&str[i]);
        }
        for(int i=1;i<=t;i++)
        {
            if(str[i]=='D') ans++;
            else ans--;
            if(ans==0) ans=4;
            else if(ans==5) ans=1;
        }
        if(ans==1) printf("N\n");
        else if(ans==2) printf("L\n");
        else if(ans==3) printf("S\n");
        else if(ans==4) printf("O\n");
    }

    return 0;
}