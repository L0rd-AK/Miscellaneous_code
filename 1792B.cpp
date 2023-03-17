#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,ans=0;
        cin>>a>>b>>c>>d;
        
        if(a==0){
            if(b>0||c>0||d>0) cout<<1<<endl;
            else cout<<0<<endl;
            continue;
        }
        ans=a;
        if(b>c){
            ans+=2*c;
            b-=c;
            ans+=min(a+1,b+d);
        }
        else{
            ans+=2*b;
            c-=b;
            ans+=min(a+1,c+d);
        } 

        cout<<ans<<endl;

    }
}