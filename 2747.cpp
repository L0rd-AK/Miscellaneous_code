#include <iostream>
#include <stdio.h>
int main()
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<39;j++)
        {
            if(i==0||i==6) printf("-");
            else if(j==0||j==38) printf("|");
            else printf(" ");
        }
        printf("\n");
    }
}