#include <iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int size=s.length();
        long num=0;
        for(int i=0;i<size;i++)
        {
            num+=((num*10)+(s[i]-'0'));
        }
    cout<<num<<endl;
    }
    return 0;
}