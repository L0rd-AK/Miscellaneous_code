#include <iostream>
#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int ans=n;
         for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    ans--;
                    break;
                }
            }
        }
        
        printf("%d\n",ans);
    }

    return 0;
}