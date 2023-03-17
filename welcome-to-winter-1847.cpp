#include <iostream>
 
using namespace std;
 
int main() {
    
    int a,b,c;
   
     cin>>a>>b>>c;
     if(a>b){
        if(b<c||b==c){
            cout<<":)"<<endl;
        }
     }
     if(a<b){
        if(b>c||b==c){
            cout<<":("<<endl;
        }
     }
    
   if(b>a&&c>b){
        if((b-a)>(c-b)){
            cout<<":("<<endl;
        }
   }if(b>a&&c>b){
        if((b-a)<=(c-b)){
            cout<<":)"<<endl;
        }
   }if(a>b&&b>c){
        if((a-b)>(c-b)){
            cout<<":)"<<endl;
        }
   }if(a>b&&b>c){
        if((b-a)<=(c-b)){
            cout<<":("<<endl;
        }
   }if(a==b&&b<c){
        cout<<":)"<<endl;
   }if(a==b&&b>c){
        cout<<":("<<endl;
   }

 
    
    return 0;
}