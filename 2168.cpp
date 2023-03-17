#include <iostream>
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1][n+1];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
        {
           scanf("%d",&a[i][j]);
        }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(a[i][j]+a[i][j+1]+a[i+1][j+1]+a[i+1][j]>=2) printf("S");
           else printf("U");
        }
        printf("\n");
    }
    return 0;
} 