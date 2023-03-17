#include <iostream>
using namespace std;
int main()
{
    int yes=0,no=0,t;cin>>t;
    string s;
    while(t--){
        cin>>s;
        if(s[0]=='F') yes++;
        else no++;
    }
    if(yes>no) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}