#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,j=0;
    cin>>a;
    for(int i=a;j<6;i++)
    {
        if(i%2!=0){
            cout<<i<<endl;
            j++;
        }
    }
 
    return 0;
}