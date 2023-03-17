#include <stdio.h>
int recursion(int a[],int,int);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int c=0;
    for(int i=1;i<=n;i++) 
    {
        c++;
        if(c==2) printf("\n");
        else if(i==n/2) printf("%d %d",recursion(a,i,n),recursion(a,i,n));
        else printf("%d ",recursion(a,i,n));
    }
}

int recursion(int a[],int x,int n)
{
    if(x==(n/2)) return a[n/2];
    else

}