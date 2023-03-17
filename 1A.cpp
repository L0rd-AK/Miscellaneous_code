#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n,m,a,i,j;
    cin>>n>>m>>a;
    //if(n%a==0)
    cout<<((n+a-1)/a)*((m+a-1)/a)<<endl;
}