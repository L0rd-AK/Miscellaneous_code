#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, ss;
    int count=0;
    

       getline(cin,s);       
    for(int i=0;i<s.length();i++)
     {
         
             if(s[i]>='a'&&s[i]<='z')
              {
                 ss.push_back(s[i]);
              }
         
     }
    sort(ss.begin(),ss.end());
     for(int i=0;i<ss.length();i++)
     {
          if(ss[i]!=ss[i+1])
           {
               count++;
           }
     }
       
  cout<<count<<endl;
     
   
 return 0;
}