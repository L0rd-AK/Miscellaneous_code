#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;int a[7];
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
        }
        if(a[0]==a[2]) c++;
        if(a[2]==a[4]) c++;
        if(a[0]==a[4]) c++;
        if(a[1]==a[3]) c++;
        if(a[3]==a[5]) c++;
        if(a[1]==a[5]) c++;

        if(c<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}