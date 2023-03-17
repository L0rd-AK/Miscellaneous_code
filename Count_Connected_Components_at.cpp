#include <iostream>
using namespace std;
int main()
{
    int n,m;
    while(1)
    {
        cin>>n>>m;
        int a[m*2];
        for(int i=0;i<m*2;i++)
        {
            cin>>a[i];
        }
        if(m>=(n-1)) cout<<1<<endl;
        else cout<<n-m<<endl;
    }

}