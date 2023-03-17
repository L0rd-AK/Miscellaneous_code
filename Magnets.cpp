#include <iostream>
using namespace std;
int main()
{
    int n, a, count=0;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       


    }
    for(int i=0;i<n;i++)
    {
       if(arr[i]!=arr[i+1])
       {
           count++;
       }
    }
    cout<<count+1<<endl;
    return 0;
}
