#include <iostream>
using namespace std;
int main()
{
    int n;string s;
    cin>>n>>s;
    for(int i=1;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n-i;j++)
        {
            if(s[j]!=s[j+i])
            {
                c++;
                if(i==n-1) break;
            }
            else break;
        }
        cout<<c<<endl;
    }
}


