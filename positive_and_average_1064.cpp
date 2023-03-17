#include <iostream>
 
using namespace std;
 
int main() {
 
    float a[6],count=0,sum=0;
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    for(int i=0;i<6;i++){
        if(a[i]>0){
            count++;
            sum+=a[i];
        }
        
    }
    cout<<count<<" valores positivos"<<endl;
    printf("%.1f\n", sum/count);
 
    return 0;
}