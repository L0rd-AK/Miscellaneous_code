#include <iostream>
#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        
        for(int i=1;i<=(n/2)+1;i++)
        {
            for(int j=i;j<=n/2;j++)
            {
                printf(" ");
            }
            for(int j=0;j!=2*i-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(int i=1;i<=2;i++)
        {
            for(int j=i;j<=n/2;j++)
            {
                printf(" ");
            }
            for(int j=0;j!=2*i-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}