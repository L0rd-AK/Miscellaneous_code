#include <stdio.h>
int main()
{
    int a,b,max,min;
    while(scanf("%d%d",&a,&b))
    {
        if(a<=0||b<=0) break;
        if(a>b)
        {
            max=a;
            min=b;
        } 
        else
        {
            max=b;
            min=a;
        }
        int sum=0;
        for(int i=min;i<=max;i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}