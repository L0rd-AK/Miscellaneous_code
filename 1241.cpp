#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t,k,count;
    cin>>t;
    string s,ss;
    for(int i=0;i<t;i++)
    {
        count=0,k=1;
        cin>>s>>ss;
        for(int j=s.length()-1;k<=ss.length();j--,k++)
        {
            if(s[s.length()-k]==ss[ss.length()-k]){
                count++;
            }
        }
        if(count==ss.length())
        {
            cout<<"encaixa"<<endl;
        }
        else
        {
            cout<<"nao encaixa"<<endl;
        }
    }



    return 0;
}