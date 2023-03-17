#include <iostream>
using namespace std;
int main()
{
    int a1[10],a2[5];
    for(int i=0;i<10;i++){
        cin>>a1[i];
    }
    for(int i=0;i<5;i++){
        cin>>a2[i];
    }
    for(int i=0,j=0;i<10;i++,j++){
        if(a1[i]%2==0){
            cout<<"par["<<j<<"] = "<<a1[i]<<endl;
            if(j==5){
                break;
            }
        }
    }
    for(int i=0,j=0;i<10;i++,j++){
        if(a1[i]%2!=0&&j!=5){
            cout<<"impar["<<j<<"] = "<<a1[i]<<endl;
            if(j==5){
                break;
            }
        }
    }
    for(int i=0;i<5;i++){
        if(a2[i]%2!=0){
            cout<<"impar["<<i<<"] = "<<a2[i]<<endl;
        }
    }
    for(int i=0;i<5;i++){
        if(a2[i]%2==0){
            cout<<"par["<<i<<"] = "<<a2[i]<<endl;
        }
    }





    return 0;
}