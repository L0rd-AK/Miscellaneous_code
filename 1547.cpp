#include <iostream>
using namespace std;
int main(){
    int t,x,y,ans=0,min=100,answer=0;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>x>>y;
        int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=0;i<x;i++){
        ans=abs(a[i]-y);
        if(min>ans){
            min=ans;
            answer=i;
        }
    }

    cout<<answer+1<<endl;
    ans=0,min=100,answer=0;
  }
    



    return 0;
}