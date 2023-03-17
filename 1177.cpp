#include <iostream>
 
using namespace std;
 
int main() {
 
    int a[1000];
    int t;
    cin>>t;
    for(int i=0,j=0;i<20;j++,i++){
        cout<<"N["<<i<<"] = "<<j<<endl;
        if(j==t-1){
            j=-1;
        }
    }
 
    return 0;
}