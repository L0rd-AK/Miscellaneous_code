#include <iostream>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if((a<b&&c<d&&a<c&&b<d)||(a<b&&c<d&&a>c&&b>d)||(a>b&&c>d&&a<c&&b<d)||(a>b&&c>d&&a>c&&b>d)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}