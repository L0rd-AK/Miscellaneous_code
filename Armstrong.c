#include <stdio.h>
int main()
{
    int n,sum,temp,ans;
    scanf("%d",&n);
    ans=n;
    for(int i=0;n>0;i++)
    {
        temp=n%10;
        sum+=(temp*temp*temp);
        n=n/10;
    }
    if(sum==ans) printf("Armstrong number\n");
    else printf("Not Armstrong number\n");
}