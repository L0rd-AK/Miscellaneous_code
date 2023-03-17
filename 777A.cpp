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

int main() 
{
  long long int n,x;
  char ch;
  string s;
  int a[4];
  in>>n>>x;
    n%=6;
    a[0]=0,a[1]=1,a[2]=2;
    f(i,0,n){
        if(i%2==0) swap(a[1],a[0]);
        else swap(a[2],a[1]);
    }
    out<<a[x];
  
  return 0;
}