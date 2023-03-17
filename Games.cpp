#include <iostream>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    int arr[n], arrr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cin>>arrr[i];
    }
    for(int i=0;i<n;i++)
     {
         for(int j=0; j<n;j++)
          {
              if(arr[i]==arrr[j])
              {
                  count++;
              }
          }
     }
     cout<<count<<endl;
}