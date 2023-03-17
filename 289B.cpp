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
  ll n,m,d;
  char ch;
  string s;
  vector<int> a,b;
  in>>n>>m>>d;
  int arr[n][m]={0},brr[n*m]={0},k=0;
  bool check=true;
  f(i,0,n){
    f(j,0,m){
      in>>arr[i][j];
      brr[k]=arr[i][j];k++;
    }
  }
  sort(brr,brr+k);
  int half=k/2,ans=0;
  
  f(i,0,k-1){
    if(brr[i]%d!=brr[i+1]%d){out<<-1; return 0;}
  }
  f(i,0,k){
    ans+=abs(brr[i]-brr[half]);
  }
  out<<ans/d;
  
  
  return 0;
}