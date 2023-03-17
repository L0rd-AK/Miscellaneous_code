#include <stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d", &n);
        printf("1");
        while(n--)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}