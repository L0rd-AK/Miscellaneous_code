#include<iostream>
#include<stdio.h>
int main()
{
    int X,Y,max,sum=0,i;
    scanf("%d %d",&X,&Y);
    if(X>Y)
    {
        i=Y;
        max=X;
    } 
    else
    {
        i=X;
        max=Y;
    } 
    while(i<=max)
    {
        //if(i==Y)break;
        if(i%13!=0)
        {
            sum=sum+i;
        }
         i++;
    }
    printf("%d\n",sum);

    return 0;
}