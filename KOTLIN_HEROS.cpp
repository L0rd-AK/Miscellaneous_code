#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long findlcm(int arr[], int n)
{
    long long ans = arr[0];
 
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}
int main()
{
    int t;
    cin>>t;
    int n,m;
    while(t--)
    {
        cin>>n>>m;
        int a[m],x;
        for(int i=0,j=0;i<m;i++)
        {
            cin>>a[i];
            
        }
        int ans=findlcm(a,m);
        
        int c=0;
        for(int i=1;i<=10;i++)
        {
            if(i%ans==0) c++;
        }
        
    
        cout<<c<<endl;
    }
}