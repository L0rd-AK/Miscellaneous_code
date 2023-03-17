#include <stdio.h>
double recursion(double,double);
int main()
{
    double n, ans = 0.0;
    scanf("%lf", &n);
    
    // while(n--)
    // {
    //     ans+=6.0;
    //     ans = 1.0/ans;
    // }
    // ans += 3.0;
    printf("%.10lf\n", recursion(n,ans)+3.0);
    return 0;
}
double recursion(double x,double y)
{
    y+=6.0;
    y = 1.0/y;
    if(x==1) return 0.1666666667; 
    else return recursion(x-1,y);
}