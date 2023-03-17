#include <iostream>
using namespace std;
int main()
{
    int cheak;
    char c;
    string s;
    while(1)
    {
        cin>>c>>s;cheak=0;
        if(c=='0'&&s[0]=='0') break;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=c)
            {
                if(s[i]!='0')
                {
                    cout<<s[i];
                    cheak=1;
                }
                else if(cheak==1) cout<<s[i];
            }
        }
        if(cheak==0) cout<<0<<endl;
        else cout<<endl;
    }
}