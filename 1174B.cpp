#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define in cin
#define out cout
#define end endl
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)

int main() 
{
  long long int n;
  char ch;
  string s;
  vector<int> a,b;
  in>>n;
  ll x[n],e=0,o=0;
  f(i,0,n){
    in>>x[i];
    if(x[i]%2==0) e++;
    else o++;
  }
  if(e!=0&&o!=0){
    sort(x,x+n);
    f(i,0,n) out<<x[i]<<" ";
  }else{
    f(i,0,n) out<<x[i]<<" ";
  }

  
  return 0;
}