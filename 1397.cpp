#include <iostream>
using namespace std;
int main()
{
    int t,x,y,count1=0,count2=0;
    
    while(1){
         cin>>t;
         if(t==0){
            break;
         }
    for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x>y){
            count1++;
        }else if(y>x){
            count2++;
        }
    }
        cout<<count1<<" "<<count2<<endl;
        count1=0,count2=0;
  }
}
