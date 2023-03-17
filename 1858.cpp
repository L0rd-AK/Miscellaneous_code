#include <iostream>
 
using namespace std;
 
int main() {
  
    int x,n,min=20,count=0;
    cin>>x;
    
    for(int i=0;i<x;i++){
        cin>>n;
        if(min>n){
            min=n;
        }
    }
    
 
    return 0;
}