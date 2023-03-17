#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b, count=0;
    cin>>n>>a;
    int arr[a],arr1[b], arr2[a+b];
    for(int i=0;i<a;i++)
     {
        cin>>arr[i];
     }
     cin>>b;
    for(int i=0;i<b;i++)
     {
        cin>>arr1[i];
     }
     for(int i=0;i<a+b;i++)
     {
         arr2[i]=arr[i]+arr1[i];
     }
     sort(arr2,arr2+(a+b));
    for(int i=0;i<a+b;i++)
    {
        if(arr2[i]!=arr2[i+1])
        {
            count++;
            
        }
       
    }
    if(count==n)
     {
         cout<<"I become the guy."<<endl;
     }
     else{
         cout<<"Oh, my keyboard!"<<endl;
     }
}
