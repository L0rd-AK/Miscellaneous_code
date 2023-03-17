#include <iostream>
using namespace std;
int main()
{
    int n,t,ans;
    while (1)
    {
        cin>>n>>t;cin.ignore();
        if(n==0&&t==0) break;
        int a[t];
        for(int i=1;i<=t;i++)
        {
            cin>>a[i];
            if(a[i]==n) ans=i;
        }
        cout<<"Ans: "<<ans<<endl;
    }
    
}