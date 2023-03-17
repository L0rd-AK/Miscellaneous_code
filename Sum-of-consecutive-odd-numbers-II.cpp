#include <iostream>
using namespace std;
int main(){
    int n,a,b,sum=0,min=0,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        sum=0;
        if(a>b){
            max=a;
            min=b;
        }else{
            min=a;
            max=b;
        }
        for(int i=min+1;i<max;i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}