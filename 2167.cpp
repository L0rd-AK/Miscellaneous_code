#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t,n,ans=0;
    cin>>t;
    int a[t+1];
    for(int i=1;i<=t;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<t;i++)
    {
        if(a[i]>a[i+1])
        {
            ans=i+1;
            break;
        }
        else if (a[i]<a[i+1] || a[i]==a[i+1])
        {
            ans=0;
        }
    }
    cout<<ans<<endl;
    ans=0;

  return 0;
}