#include <iostream>
#include <stdio.h>
int main()
{
    int t,n;
    while(scanf("%d %d",&t,&n)!=EOF)
    {
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int temp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
            }
        }
        int c=0;
        for(int i=1,j=0;i<=t;i++)
        {
            
            
                if(i==a[j])
                {
                    c++;j++;
                    continue;
                }
                else
                {
                    printf("%d ", i);
                }  
            
            
        }

        if(c==t) printf("*\n");
            else printf("\n");
    }


    return 0;
}