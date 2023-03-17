#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s[t];
    for(int i=0;i<t;i++) cin>>s[i];
    for(int i=t-1;i>=0;i--) cout<<s[i]<<endl;
}