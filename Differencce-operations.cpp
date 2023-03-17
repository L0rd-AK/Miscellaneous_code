#include <iostream>
using namespace std;
int main(){

    int t,n, count=1;
    cin>>t;
    for(int j=0;j<t;j++){
        count=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if(a[i]%a[0]==0){
                count++;
            }
        }

        if(count==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
      }
    }
    


    return 0;
}