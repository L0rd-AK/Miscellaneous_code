#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;int a[n],c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) c++;
        }
        if(c==1){
            cout<<n<<endl;
        }else{
            int ans=n-c;
            ans+=c/2;
            if(c%2==1)cout<<ans+1<<endl;
            else cout<<ans<<endl;
        }
        
    }
}