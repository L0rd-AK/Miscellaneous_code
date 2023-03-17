#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    

    while(1){
        cin>>n;
        if(n==0){
            break;
        }
        for(int i=1;i<=n-1;i++){
            cout<<i<<" ";
        }
        cout<<n<<endl;
    }

    



    return 0;
}