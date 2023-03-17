#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define in cin
#define out cout
//#define end endl
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)

int solve(string s,string ss,ll n){
    n++;
    ll c=0;
    f(i,0,s.length()){
    c+=(s[i]-48);
  }
  while(c!=0){
    ss+=(c%10)+48;
    c=c/10;
  }
  reverse(ss.begin(), ss.end());
  if(ss=="0"||ss=="1"||ss=="2"||ss=="3"||ss=="4"||ss=="5"||ss=="6"||ss=="7"||ss=="8"||ss=="9") {out<<n;}
  else{
    s=ss;
    ss="\0";
    solve(s,ss,n);
  } 
}
int main() 
{
  ll n=0,d;
  char ch;
  string s,ss;
  vector<int> a,b;
  in>>s;
  if(s.length()==1) {out<<0<<endl; return 0;}
  solve(s,ss,n);

  ll time =  clock();
  //printf("\n%f",(float)time/CLOCKS_PER_SEC);
  return 0;
}