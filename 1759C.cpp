#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int l,r,x,a,b,min,max;
    while(t--)
    {
        cin>>l>>r>>x>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(abs(a-b)>=x)
        {
            cout<<1<<endl; 
            continue;
        }
        if(a<b)
        {
            max=b;
            min=a;
        }
        else
        {
            max=a;
            min=b;
        }
       
            if(abs(max-r)>=x||abs(min-l)>=x) cout<<2<<endl;
            else if(abs(max-r)<x&&abs(l-max)>=x&&abs(min-r)>=x||abs(min-l)<x&&abs(min-r>=x)&&abs(max-l)>=x) cout<<3<<endl;
            else cout<<-1<<endl;
       
    }
 
}
