#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,n, count=0;
    cin>>x;
    for(int j=0;j<x;j++){
        cin>>n;count=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
                break;
            }
        }
        if(count==0){
        cout<<n<<" eh primo"<<endl;
        }else{
            cout<<n<<" nao eh primo"<<endl;
        }
    }
    
    return 0;
}