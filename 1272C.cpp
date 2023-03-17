#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define in cin
#define out cout
#define end endl
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)
#define ll long long int

int main() 
{
  ll n,k;
  string s;
  vector<int> a,b;
  in>>n>>k;
  char ch;ll str[27];
  f(i,0,27) str[i]=0;
  in>>s;
  s.push_back('@');
  f(i,0,k){
    in>>ch;
    str[ch-'a']=1;
  } 
  ll len=0,ans=0;
  f1(i,0,n){
    ll x=str[s[i]-'a'];
    if(x==1){
        len++;
    }else{
        ans+=(len*(len+1))/2;
        len=0;
    }
  }

    out<<ans;
  
  
  return 0;
}