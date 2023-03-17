#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s,s1;
    cin>>s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
       if(count==3){
           s1+=',';s1+=s[i];count=0;
       }else{
           s1+=s[i];
       }
       count++;

    }
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;

return 0;

}