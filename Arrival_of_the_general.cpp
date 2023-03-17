#include <iostream>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                count++;
                swap(arr[j],arr[j+1]);
                
            }
        }
    }
    cout<<count<<endl;
    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<endl;
    }
   
}