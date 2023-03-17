#include <iostream>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    if(a>=x&&b>=y&&c>=z)
    {
        cout<<0<<endl;
    }
    else if(a<x&&b<y&&c<z)
    {
        cout<<(x-a)+(y-b)+(z-c)<<endl;
    }
    else if(a<x&&b<y&&c>=z)
    {
        cout<<(y-b)+(x-a)<<endl;
    }
    else if(a>=x&&b<y&&c<z)
    {
        cout<<(y-b)+(z-c)<<endl;
    }
    else if(a<x&&b>=y&&c<z)
    {
        cout<<(z-c)+(x-a)<<endl;
    }
    else if(a<x&&b>=y&&c>=z)
    {
        cout<<(x-a)<<endl;
    }
    else if(a>=x&&b<y&&c>=z)
    {
        cout<<(y-b)<<endl;
    }
    else if(a>=x&&b>=y&&c<z)
    {
        cout<<(z-c)<<endl;
    }

}