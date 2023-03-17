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
  double x,y,ans,ans1;
  char ch;
  string s;
  vector<int> a,b;
  in>>x>>y;
  if(x==y) out<<"=";
  else{
    ans=y*log10(x);
    ans1=x*log10(y);
    if(ans>ans1) out<<">";
    else if(ans<ans1) out<<"<";
    else out<<"=";
  }
 
   
  return 0;
}