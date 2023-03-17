#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)
#define MOD 1000000007

int main() 
{
  ll t,n,m,ans=0,d=1;
  cin>>t;
  while(t--){
    cin>>n;
    ans=n*(n-1);
    ans%=MOD;
    f1(i,1,n){
      ans*=i;
      ans%=MOD;
    }
    cout<<ans<<endl;
  }
 

  return 0;
}