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
  long long int m,n,x;
  char ch;
  string s;
  vector<int> a,b;
  in>>n>>m;
  x=n;
  n=n/2;
  if(x==1&&m==1) out<<m;
  else if(n<m) out<<m-1;
  else out<<m+1;
  
  
  return 0;
}