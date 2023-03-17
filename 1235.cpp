#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        
        int i=0,j=0;
        getline(cin,s);
        int size=s.length()/2;
        
        char s1[size];
        char s2[size];
        for(i=0;i<size;i++)
        {
                s1[i]=s[i];
        }
        j=0;
        for(int k=0,j=size;j<s.length();j++,k++)
        {
                s2[k]=s[j];
        }
        i=0;
        for(i=(size)-1;i>=0;i--)
        {
                cout<<s1[i];
        }
        for(int j=(size)-1;j>=0;j--)
        {
                cout<<s2[j];
        }
        cout<<endl;
    }
}