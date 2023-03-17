#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
    int n;

    while(scanf("%d",&n))
    {
        if(n==0) break;
        int a[n][n];

        for(int i=0;i<n;i++)
        {
            int c=0;
           for(int j=0;j<n;j++)
           {
                a[i][j]=pow(2,j+i);
           }
        }
        int width = 0;
                int max = pow(2, n+n-2);

                while(max > 0){
                    max /= 10;
                    width++;
                }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                if(i==0&&j==0)
                {
                    for(int i=1;i<width;i++) printf(" ");
                    printf("1");
                } 
                else if(j==0)
                {
                    
                    if(width==1)
                    {
                        printf("%1d",a[i][j]);
                    }
                    else if(width==2)
                    {
                        printf("%2d",a[i][j]);
                    }
                    else if(width==3)
                    {
                        printf("%3d",a[i][j]);
                    }
                    else if(width==4)
                    {
                        printf("%4d",a[i][j]);
                    }
                    else if(width==5)
                    {
                        printf("%5d",a[i][j]);
                    }
                    else if(width==6)
                    {
                        printf("%6d",a[i][j]);
                    }
                    else if(width==7)
                    {
                        printf("%7d",a[i][j]);
                    }
                    else if(width==8)
                    {
                        printf("%8d",a[i][j]);
                    }
                    else if(width==9)
                    {
                        printf("%9d",a[i][j]);
                    }
                       
                } 
                else
                {
                    if(width==1)
                    {
                        printf("%2d",a[i][j]);
                    }
                    else if(width==2)
                    {
                        printf("%3d",a[i][j]);
                    }
                    else if(width==3)
                    {
                        printf("%4d",a[i][j]);
                    }
                    else if(width==4)
                    {
                        printf("%5d",a[i][j]);
                    }
                    else if(width==5)
                    {
                        printf("%6d",a[i][j]);
                    }
                    else if(width==6)
                    {
                        printf("%7d",a[i][j]);
                    }
                    else if(width==7)
                    {
                        printf("%8d",a[i][j]);
                    }
                    else if(width==8)
                    {
                        printf("%9d",a[i][j]);
                    }
                    else if(width==9)
                    {
                        printf("%10d",a[i][j]);
                    }
                } 
            }printf("\n");
        }printf("\n");
    }
}

