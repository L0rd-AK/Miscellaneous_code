#include <stdio.h>
int main()
{
    int n,ans,sum=1,sum1=0,temp;
    scanf("%d",&n);
    ans=n;
    while(n!=0)
    {
        temp=n%10;sum=1;
        for(int j=temp;j>=1;j--)
        {
            sum*=j;
        }
        n=n/10;sum1+=sum;
    }
    if(sum1==ans) printf("Strong number\n");
    else printf("Not a strong number\n");
}