#include <stdio.h>
int main()
{
    int t,n;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        int x,sum=1000; 
        for(int j=0;j<n;j++)
        {
            x=0;char c[1];
            scanf("%s %d", &c[0],&x);
            if(c[0]=='+')
            {
                sum+=x;
            }
            else
            {
                sum-=x;
            }
        }
        printf("Case %d: %d\n",i+1,sum);
    }
}