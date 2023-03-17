#include <iostream>
using namespace std;
int main()
{
    int g,i,t,group=0,indiv=0,ic=0,gc=0;
    cin>>g>>i>>t;
    int n;string s;
    while(1)
    {
        
        cin>>n;
        if(t==n){
            if(s=="or")indiv++;
            break;
        } 
        cin>>s;
        if(s=="and")
        {
            ic=0;gc++;
            if(s=="and"&&gc==2)
            {
                gc=0;
            }
            else group++;
        }
        if(s=="or")
        {
            ic++;gc=0;
            if(s=="and") indiv++;
            if(s=="or"&&ic==2)
            {
                indiv++;ic=1;
            }
        }
         

    }
    if(g>=group&&i>=indiv) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    cout<<group<<" "<<indiv<<endl;
}