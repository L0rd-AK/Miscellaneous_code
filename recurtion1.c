#include <stdio.h>
int recurtion1(int);
int recurtion2(int);
int main()
{
    int n;
    scanf("%d",&n);
    recurtion1(n);
    
    
}
int recurtion1(int x)
{
   for(int i=1;i<=x;i++) printf("%d ",i);
   recurtion2(x-1);
}
int recurtion2(int x)
{
   printf("%d ",x);
    if(x==1) return 1;
    else return recurtion2(x-1);
}