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

__int128 LCM(__int128 a,__int128 b){
  return (a*b)/__gcd(a,b);
}

int main() 
{
  ll t,n,d=1;
  cin>>t;
  while(t--){
    ll m,sum=0;
    cin>>m>>n;
    int a[n];
    ll TO=pow(2,n)-1;
    f(i,0,n) cin>>a[i];
     
    f(i,0,TO){
      __int128 lcm=1,c=0;
      f1(j,0,n-1){
        if(i&(1<<j)){
          lcm=LCM(lcm,a[j]);
          c++;
        }
      }
      if(c%2==0) sum-=(m/lcm);
      else sum+=(m/lcm);
    }

    printf("Case %lld: %lld\n",d++,(__int128)sum);
  }
 

  return 0;
}
