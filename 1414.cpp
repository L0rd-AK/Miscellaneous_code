#include <iostream>
#include <stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b))
    {
        if(a==0&&b==0) break;
        int x,sum=0;char s[20];
        for(int i=0;i<a;i++)
        {
            scanf("%s %d",s,&x);
            sum+=x;
        }
        printf("%d\n",(b*3)-sum);
    }

    return 0;
}