#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,t;
    cin>>t>>n;
    string s[1000],sub_s[1000],ss;
    for(int i=0;i<t;i++) cin>>s[i];
    for(int i=0;i<n;i++) cin>>sub_s[i];
    int c=0;
    for(int i=0;i<t;i++){
        ss=s[i].substr(3);
        for(int j=0;j<n;j++){
            if(ss==sub_s[j]) {c++;break;}
        }
    }

    cout<<c<<endl;
        
        
    
    
}