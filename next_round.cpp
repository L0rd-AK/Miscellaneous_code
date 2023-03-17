#include <iostream>
using namespace std;

int main()
{
    int n,k, count=0;
    string s;

    cin>>n;
    cin>>k;
    cin>>s;
    for(int i=0;i<s.length();i+2)
       {
           cout<<i<<endl;
           
           if(s[i]>k)
              {
                  count++;
              }
       }
       cout<<count<<endl;
       return 0;
}
