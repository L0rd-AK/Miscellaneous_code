#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr,arr+a);
    if(arr[a-1]+arr[a-2]>=b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 return 0;
}