#include <iostream>
#include <string>

using namespace std;
int main ()
{
    string s;
    char ch, ch1;
    int a=0, b=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
          {
              a++;
          }
             if(s[i]>='a'&&s[i]<='z')
              {
                 b++;
              }
    }
    for(int j=0;j<s.length();j++)
    {
         if(a>b)
            {
                 ch1=toupper(s[j]);
                 cout<<ch1;
            }
    
        if(b>a||a==b)
         {
             ch =tolower(s[j]);
             cout<<ch;
         }
    }
    return 0;
}