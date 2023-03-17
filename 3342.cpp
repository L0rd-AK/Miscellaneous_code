#include <iostream>
#include <stdio.h>
int main()
{
    int t,w=0,b=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
        for(int j=1;j<=t;j++)
        {
            if((i+j)%2==0) w++;
            else if((i+j)%2==1) b++;
        }

    printf("%d casas brancas e %d casas pretas\n",w,b);

    return 0;
}