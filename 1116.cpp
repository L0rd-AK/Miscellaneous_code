#include <iostream>
 
using namespace std;
 
int main() {
    
    int n; float x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;

        if(y!=0){
            printf("%.1f",x/y);
        }else{
            cout<<"divisao impossivel"<<endl;
        }
    }
   
 
    return 0;
}