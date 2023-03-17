#include <iostream>
using namespace std;
int main()
{
    string s,ss;
    while(1)
    {
        int c0unt=0,siz3=0;
        cin>>s>>ss;
        if(s[0]=='0'&&ss[0]=='0') break;
        for(int i=0;i<ss.length();i++)
        {
            if(ss[i]==s[0])
            {
                ss[i]=s[i+1];
                c0unt++;
            }
        }
        int count=0,size=0;siz3=0;
        siz3=ss.length();
        size=ss.length()-c0unt;
        for(int i=0;i<ss.length();i++)
        {
            if(ss[i]=='0')
            {
                count++;
            }
        }
        for(int i=0;i<ss.length();i++)
        {
            if(count==size || siz3==0)
            {
                cout<<0;
                break;
            }
            else if(ss[i]>=48&&ss[i]<=57) cout<<ss[i];
        }cout<<endl;
    }


    return 0;
}