#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int count=0,n=s.length();
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[i+1]) count++;
        }
        if(count>=13&&count<26) cout<<"frase quase completa"<<endl;
        else if(count==26) cout<<"frase completa"<<endl;
        else if(count>0&&count<13) cout<<"frase mal elaborada"<<endl;
    }
}