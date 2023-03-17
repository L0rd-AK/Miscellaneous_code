#include <iostream>
#include <stdio.h>
int main()
{
    int n;

    while(scanf("%d",&n))
    {
        if(n==0) break;
        int a[n][n];

        for(int i=0,k=1;i<n;i++,k++)
        {
            int c=0;
           for(int j=0,l=k;j<=i;j++,l--)
           {
                a[i][j]=l;c++;
           }
            for(int j=c,l=2;j<n;j++,l++)
            {
                a[i][j]=l;
            }
                
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0) printf("%3d ",a[i][j]);
                else printf("%4d ",a[i][j]);
            }printf("\n");
        }printf("\n");
    }
}