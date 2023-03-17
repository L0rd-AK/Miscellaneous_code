#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int odd=0,even=0,go=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]%2==0)
                {
                    go++;
                }
                else even++;
            }
            else
            {
                if(a[i]%2==1)
                {
                    go++;
                }
                else odd++;
            }
        }

        if(go==n) cout<<0<<endl;
        else if(even==odd) cout<<odd<<endl;
        else cout<<"-1"<<endl;
        
        
        
    }
}