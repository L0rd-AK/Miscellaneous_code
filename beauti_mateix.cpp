#include <iostream>

using namespace std;
int main (){
    int s=0;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>s;
            if(s==1){
                cout<<abs(i-3)+abs(j-3)<<endl;
            }
        }
    }
    return 0;
}