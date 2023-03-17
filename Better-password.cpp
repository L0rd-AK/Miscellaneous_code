#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]>='a'&&s[0]<='z')
      {
          s[0]=towupper(s[0]);
          cout<<s[0];
      }else{
          cout<<s[0];
      }
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='s'){
            cout<<"$";
        }else if(s[i]=='i'){
            cout<<"!";
        }else if(s[i]=='o'){
            cout<<"()";
        }else{
            cout<<s[i];
        }
    }
    
    cout<<"."<<endl;

    return 0;
}