#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x,y;bool check=false;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='n'&&s[i+1]=='a')
        {
            cout<<"nya";i++;
        }
        else cout<<s[i];
    }
    
}