#include <iostream>
using namespace std;
int main()
{
    int t,maxx=-1,ans=0;
    while(1){
        cin>>t;
        if(t==0){
            break;
        }
        int a[t];
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        for(int i=0;i<t;i++){
            if(a[i]>maxx){
                maxx=a[i];
            }
        }
        for(int i=0;i<t;i++){
            if(a[i]==maxx){
                a[i]=0;
            }
        }
        maxx=-1;
        for(int i=0;i<t;i++){
            if(a[i]>maxx){
                maxx=a[i];
                ans=i;
            }
        }
            cout<<ans+1<<endl;
            ans=0;maxx=0;fill_n(a,t,0);
    }

    

    return 0;
}