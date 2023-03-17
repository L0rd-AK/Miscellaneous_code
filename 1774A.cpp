#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count;
        string s;
        cin>>n;cin>>s;
        count=0;
        if(s[0]=='1') count++;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='0') {cout<<"+";} 
            else 
            {
                if(count>0)
                {
                    cout<<"-";count--;
                }
                else
                {
                    cout<<"+";count++;
                } 
            }
        }
        cout<<endl;
    }
}