#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,ans=0, ans1=0;
    for(int i=0;i<n;i++)
     {
         cin>>a>>b;
         ans-=a;
         ans+=b;
        if(ans>ans1)
        {
            ans1=ans;
        }
        
     }
      
     cout<<ans1<<endl;
}