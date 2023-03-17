#include <iostream>
using namespace std;
int main()
{
    int t,a,b,low,ans,maxx,rem;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        low=min(a,b);
        maxx=max(a,b);
        while(maxx%low!=0)
        {
            rem=maxx%low;
            maxx=low;
            low=rem;
        }
        cout<<low<<endl;
        low=0,ans=0,rem=0;
    }
}
