#include <iostream>
#include <stdio.h>
int main()
{
    int r,c;
    while(scanf("%d%d",&r,&c)!=EOF)
    {
        int a[r+2][c+2];
        for(int i=0;i<=r+1;i++)
        {
            for(int j=0;j<=c+1;j++)
            {
                if(i>=1&&i<=r&&j>=1&&j<=c) scanf("%d",&a[i][j]);
                else a[i][j]=0;
            }
        }
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(a[i][j]==1) printf("9");
                else if(a[i][j]==0)
                {
                    a[i][j]+=a[i-1][j];
                    a[i][j]+=a[i+1][j];
                    a[i][j]+=a[i][j-1];
                    a[i][j]+=a[i][j+1];
                    printf("%d",a[i][j]);
                    a[i][j]=0;  
                }
            }
            printf("\n");
        }
    }
}