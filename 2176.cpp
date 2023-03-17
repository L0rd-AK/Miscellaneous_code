#include <iostream>
using namespace std;
int main()
{
    string s;int count=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<s<<'0'<<endl;
    }
    else
    {
        cout<<s<<'1'<<endl;

    }



    return 0;
}