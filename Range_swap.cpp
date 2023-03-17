#include <iostream>
using namespace std;
int main()
{
    int n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }for(int i=p,j=r;i<=q;i++,j++) swap(a[i],a[j]);
    
    // swap(a[r],a[s]);
    
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;

}