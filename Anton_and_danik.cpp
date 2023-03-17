#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,A=0,D=0;
    cin>>a;
    string s;
    cin>>s;
    for(int i=0;i<a;i++)
    {
        if(s[i]=='A')
         {
             A++;
         }
         if(s[i]=='D')
         {
             D++;
         }
    }
    if(A>D)
    {
        cout<<"Anton"<<endl;
    }
    else if(D>A)
    {
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}