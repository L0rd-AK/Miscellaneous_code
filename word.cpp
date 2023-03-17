#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main ()
{
    string s;
    int a, b;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i<='Z'])
          {
              a++;
          }
        if(s[i]>='a'&&s[i<='z'])
          {
              b++;
          }
    }
     for(int i=0;i<s.length();i++)
     {
            if(b>a||b==a)
             {
                cout<<tolower(s[i])<<endl;
             }
            else
             {
                cout<<toupper(s[i])<<endl;
             }
     }
    return 0;
}