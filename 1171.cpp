#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0,ans=0;
    cin>>t;
    int a[t];
    vector <int> arr;
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    sort(a,a+t);
    for(int i=0;i<t;i++){
        if(a[i]!=a[i+1]){
            arr.push_back(a[i]);
            count++;
        }
    }
    for(int i=0;i<count;i++){
        for(int j=0;j<t;j++){
            if(arr[i]==a[j]){
                ans++;
            }
        }
        cout<<arr[i]<<" aparece "<<ans<<" vez(es)"<<endl;
        ans=0;
    }
    return 0;
}