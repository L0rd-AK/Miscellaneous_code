#include <iostream>
#include <stdio.h>
int main()
{

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1||j==i) printf(" %c",64+i);
            else printf("  ");
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1||j==i) printf(" %c",64+i);
            else printf("  ");
        }
        printf("\n");
    }
}
