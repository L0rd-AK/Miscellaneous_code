#include <iostream>
#include <string>
using namespace std;
int main()
 {
     string s, ss;
     cin>>s>>ss;
     for(int i=0;i<s.length();i++)
      {
          if(s[i]==ss[i])
           {
               cout<<0;
           }
           else
           {
               cout<<1;
           }
      }
      
 }