#include <iostream>
using namespace std;
int main()
{
    int t,k;
    while(1){
        cin>>t;
        if(t==0) break;
        int a[t+1];
        for(int i=1;i<=t;i++){
            cin>>a[i];
        }
        cin>>k;
        for(int i=k;;){
            if(i==a[i]){
                cout<<i<<endl;
                break;
            }else{
                i=a[i];
            }
        }
    }

    return 0;
}