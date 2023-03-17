#include <iostream>
#include <stdio.h>
int main()
{
    int t,n,c=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        printf("Case %d: %d\n",c,a[n/2]);
        c++;
    }
    
    return 0;
}
