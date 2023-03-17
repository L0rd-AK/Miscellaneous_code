#include <iostream>
#include <string>
using namespace std;

int main ()
{
  
    string s;
    cin>>s;
    string s1 ="hello";
    int x=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s1[x])
        {
            x++;
        }
    }
    if(x==5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
       
}