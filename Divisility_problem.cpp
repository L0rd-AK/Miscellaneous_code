#include <iostream>
using namespace std;
int main()
{
    int t, count=0;
    cin>>t;
    long long int a,b;
    for(int i=0;i<t;i++)
    {   
        cin>>a>>b;
           if(a%b!=0)
            {
              cout<<b-(a%b)<<endl;
            }
            else
            {
             cout<<0<<endl;
            }
    }
    
}