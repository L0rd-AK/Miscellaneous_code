#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int arr[3], count=0;
    for(int i=0;i<3;i++)
    {
     cin>>arr[i];
    }
    for(int i=0;i<3;i++){
     if(arr[i]%2!=0)
     {
         count++;
     }
    }
    cout<<count<<endl;
    if(count==2||count==3)
     {
         cout<<"3 Kimonos for Nezuko"<<endl;
     }
     else{
         cout<<"You have to choose two"<<endl;
     }
     return 0;
}