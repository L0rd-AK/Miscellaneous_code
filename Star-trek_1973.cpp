#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    string arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   
    for(int i=0;arr[i]!=' ';){
        if(arr[i]%2!=0&&arr[i]!=' '){
            arr[i]-=1;
            ++i;
        }
        else if(arr[i]%2==0&&arr[i]!=' '){
            arr[i]-=1;
            --i;
        }
        else{
            break;
        }
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<" "<<sum;


    return 0;
}