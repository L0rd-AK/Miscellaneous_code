#include <iostream>
using namespace std;
int main()
{
    int n, t, a, b=0, count=0;
    cin>>n;
    for(int i=0;i<n;i++)
     {
         cin>>t;
         if(t!=2&&t%2!=0)
         {
             cout<<t/2<<endl;
         }
         else if(t!=0&&t%2==0)
         {
             cout<<t/2-1<<endl;
         }
         else
         {
             cout<<0<<endl;
         }
        
     }
     
}