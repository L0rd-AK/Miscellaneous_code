#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2,s3;
    cin>>s1>>s2>>s;
    s3=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s.begin(),s.end());
    if(s==s3)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }

}