#include <iostream>
 
using namespace std;
 
int main() {
 
     int x,y,count=0;
     cin>>x>>y;
     for(int i=1,j=1;i<y;i++){
        cout<<i<<" ";
        count++;
        if(count==x-1&&j<y/x){
            cout<<x*j;
            cout<<endl;
            count=0;
            j++;i++;
        }
     }
     cout<<y<<endl;
 
    return 0;
}