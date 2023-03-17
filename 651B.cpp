#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define in cin
#define out cout
//#define end endl
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)

int main() 
{
  ll n,x;
  char ch;
  string s;
  vector<int> a,b;
  in>>n;
  f(i,0,n){
    in>>x;
    a.push_back(x);
  }
  int maxx=-1,store;
  f(i,0,n){
    store=count(a.begin(),a.end(),a[i]);
    maxx=max(maxx,store);
  }
  out<<n-maxx;
  
  
    
   
  return 0;
}