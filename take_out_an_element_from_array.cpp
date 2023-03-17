#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,n1;
    string s;
    cout<<"Enter the Length of the ARRAY: ";
    cin>>n;
    int arr[n];
    printf("Enter %d integers:", n);
    for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cout<<"Your ARRAY: ";
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<" "<<endl;
     cout<<"do you want to short your ARRAY: (Y/N)"<<endl;
     cin>>s;
     int j=0;
     if(s[j]=='Y'||s[j]=='y')
     {
         for(int i=0;i<n;i++)
          {
              for(int j=0;j<n-1;j++)
               {
                   if(arr[j]>arr[j+1])
                    {
                        swap(arr[j],arr[j+1]);
                    }
               }
          }
          cout<<"Your ARRAY after shorting: ";
          for(int i=0;i<n;i++)
           {
               cout<<arr[i]<<" ";
           }
           cout<<" "<<endl;
     }
      
     cout<<"Now Enter the index of the element you want to remove: ";
        cin>>n1;
        for(int i=n1;i<n;i++)
         {
             arr[i]=arr[i+1];
         }
         cout<<"Your ARRAY after removing: ";
         for(int i=0;i<n-1;i++)
          {
              cout<<arr[i]<<" ";
          }
     

     return 0;
}