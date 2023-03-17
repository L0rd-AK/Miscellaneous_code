#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s,ss;
    while(getline(cin,s)){
        // s.resize(s.length()+1);
        for(int i=1;i<s.length();i++){
            if(s[i]==','&&s[i-1]==' '){
                for(int j=(i-1);j<s.length();j++){
                    s[j]=s[j+1];
                }
            }
            if(s[i]=='.'&&s[i-1]==' '){
                for(int j=(i-1);j<s.length();j++){
                    s[j]=s[j+1];
                }
            }
            
        }
        cout<<s<<endl;
    }
    //cout<<endl;
    return 0;
}