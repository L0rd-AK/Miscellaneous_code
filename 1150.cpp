#include <iostream>
#include <stdio.h>
int main()
{
    int x,z,sum,count;
    scanf("%d",&x);
    
        while(scanf("%d",&z))
        {
            if(z>x) break;
        }
        sum=0,count=0;
        for(int i=x;sum<z;i++)
        {
            sum+=i;
            count++;
        }
    
    printf("%d\n",count);

}