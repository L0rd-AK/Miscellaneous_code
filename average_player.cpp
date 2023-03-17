#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    long double count=0,sum=0;
    
    for(int k=1;k<=t;k++)
    {
        cin>>n;
        double a[n],max=-1;
        long long int x;
        for(long int j=1;j<=n;j++)
        {
            cin>>x;count=0;
            for(long int i=1;i<=sqrt(x);i++)
            {
                if(x%i==0){
                    if(i==x/i) count++;
                    else count=count+2;
                }
                
            }
            //count=count+3;
            if(max<count) max=count;
        }
        printf("Case %d: %.4lf\n",k,max);
        sum=0;
    }
    
}