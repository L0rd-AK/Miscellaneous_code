#include <iostream>
using namespace std;
int main(){

    int n,a;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>a;
        for(int i=2;i<=a;i++){
            cout<<i<<" ";
        }
        cout<<1<<endl;
    }
    

    return 0;
}