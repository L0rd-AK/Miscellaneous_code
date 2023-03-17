#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    long long int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        long long int arr[32],brr[32],crr[32],sum=0,ans=0;
        for(int i=0;i<32;i++)
        {
            arr[i]=0;
            brr[i]=0;
            crr[i]=0;
        }
        for(int i=0;i<32;i++)
        {
            if(a==0&&b==0) break;
            if(a!=0)
            {
                arr[i]=a%2;
                a=a/2;
            }
            if(b!=0)
            {
                brr[i]=b%2;
                b=b/2;
            }
            if(arr[i]==brr[i])
                crr[i]=0;
            else crr[i]=1;
            if(a==0&&b==0) break;
        }
        reverse(crr,crr+32);
        for(int j=31,i=0;j>=0;j--,i++)
        {
            sum+=(pow(2,i)*(crr[j]));
        }
        cout<<sum<<endl;
        sum=0,ans=0;
    }
 
    return 0;
}