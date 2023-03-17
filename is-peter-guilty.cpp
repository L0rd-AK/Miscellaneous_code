#include <iostream>
using namespace std;
int main()
{
    int m[4],n,sum=0;
    for(int i=0;i<4;i++)
    {
        cin>>m[i];
        sum+=m[i];
    } 

    if(m[0]==1)
    {
        cout<<"YES"<<endl;
        exit(0);
    }
    else if(sum>=2) cout<<"YES"<<endl;
    else if(sum<=1) cout<<"NO"<<endl;
}