#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    long long int a[61];
    a[0]=0,a[1]=1;
    for(int i=2;i<=60;i++){
        a[i]=(a[i-1]+a[i-2]);
    }
    for(int i=0;i<t;i++){
        cout<<"Fib ("<<arr[i]<<") = "<<a[arr[i]]<<endl;;
    }
    return 0;
}