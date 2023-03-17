#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i=0;
    string s;
    cin>>s;

    if(s[i]>='a'&&s[i]<='z')
      {
          s[0]= toupper(s[0]);
      }
    cout<<s<<endl;
}