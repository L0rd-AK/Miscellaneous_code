#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]) c++;
        }
        if(c==n-1) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<a[n-1]<<" ";
            for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}