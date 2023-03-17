#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int size=s.length();
        if(s[0]>96&&s[0]<123) cout<<s[0];
        for(int i=1;i<size;i++)
        {
            if(s[i]>96 &&s[i]<123)
            {
                if(s[i-1]<96||s[i-1]>123) 
                {
                    cout<<s[i];
                }
            }
        }
        cout<<endl;
    }
     return 0;
}