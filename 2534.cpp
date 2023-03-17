#include <iostream>
#include <stdio.h>

int main()
{
    int t,n;
    while(scanf("%d%d",&t,&n)!=EOF)
    {
        int a[t],ar[n];
        for(int i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }

        int temp;
      for(int i=0;i<t-1;i++)
    {
        for(int j=0;j<t-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
   
        
        int c;
        for(int i=0;i<n;i++)
        {
            printf("%d\n",a[ar[i]-1]);
        }
    }
    return 0;
}
