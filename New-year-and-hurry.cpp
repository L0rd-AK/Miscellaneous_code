#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s=0,ss=0,arr[12];int count=0;
    cin>>n>>k;
    for(int i=0,j=1,l=5;i<n,j<=n;j++,i++,l*5){
        arr[i]=j;
        arr[i]=arr[i]*5;
    }
    for(int i=0;i<n;i++){
        if(arr[i]+k<=240){
            count++;
            k=arr[i]+k;
        }
       // cout<<arr[i]+k<<" ";
    }
    cout<<count<<endl;
 return 0;
}