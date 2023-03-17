#include <iostream>
#include <stdio.h>
#include <string.h>
int main()
{
    int t=0;
    while(scanf("%d",&t))
    {
        if(t==0) break;
        int n,sum=0;char s[100];
        while(t--)
        {
            scanf("%d",&n);
            gets(s);
            if(s[1]=='s') sum+=n*120;
            else if(s[1]=='m'&&s[3]=='r') sum+=n*85;
            else if(s[3]=='m') sum+=n*85;
            else if(s[3]=='n') sum+=n*56;
            else if(s[1]=='g') sum+=n*70;
            else if(s[1]=='l') sum+=n*50;
            else if(s[1]=='b') sum+=n*34;
        }
        if(sum>130) printf("Menos %d mg\n",sum-130);
        else if(sum<110) printf("Mais %d mg\n",110-sum);
        else printf("%d mg\n",sum);
    }
}