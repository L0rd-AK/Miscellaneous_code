#include <iostream>
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t][t];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //cordinates inputs
    int arr[2*t],y,x;
    for(int i=0;i<2*t;i++)
    {
        scanf("%d%d",&x,&y);
        arr[i]=a[x-1][y-1];
    }
   //sorting
    int temp;
    for(int i=0;i<2*t;i++)
    {
        for(int j=0;j<(t*2)-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int ans=0;
    for(int i=0;i<t*2;i++)
    {
        if(arr[i]!=arr[i+1]) ans++;
    }

    printf("%d\n",ans);
    return 0;
}