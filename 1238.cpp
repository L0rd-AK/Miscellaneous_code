#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s,s1;
        cin>>s>>s1;
        if(s.length()>s1.length())
        {
            int j=0;
            int size=s.length();
            for(j=0;j<s1.length();j++)
            {
                cout<<s[j]<<s1[j];
            }
            int k;
            for(int k=j,l=0;l<size-s1.length();k++,l++)
            {
                cout<<s[k];
            }
        }
        else
        {
            int j=0,size=s1.length();
            for(j=0;j<s.length();j++)
            {
                cout<<s[j]<<s1[j];
            }
            int k;
            for(int k=j,l=0;l<size-s.length();k++,l++)
            {
                cout<<s1[k];
            }
        }
        cout<<endl;
    }
}