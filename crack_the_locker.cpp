#include <iostream>
using namespace std;
int main()
{
    string s,code,ans;
    int t,size;
    cin>>s;
    cin>>t;
    cin>>code;
    size=code.length();
    for(int i=0,j=0;i<size;i++)
    {
        if(code[i]=='L')
        {
            t=t-1;
            //if(t==0) t=s.length();
        }
        else if(code[i]=='R')
        {
            t=t+1;
            //if(t==s.length()) t=0;
        }
        else if(code[i]=='+')
        {
            cout<<s[t-1];
            j++;
        }
    }
    cout<<endl;


    return 0;
}