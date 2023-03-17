#include <iostream>
using namespace std;
int main()
{
    long long int a, t, sum=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        a=a/3;
        sum+=a;
    }
    
   
    
    cout<<sum*3<<endl;
}