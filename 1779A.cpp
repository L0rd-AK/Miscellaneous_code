#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;bool check=true;
        cin>>n;cin>>s;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='R' and s[i+1]=='L') {cout<<0<<endl;check=false; break;}
        }
        if(check)
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i]=='L' and s[i+1]=='R') {cout<<i+1<<endl;check=false;break;}
            }
        }
        if(check) cout<<-1<<endl;

    }
}