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
  ll n,x,e=0,o=0;
  char ch;
  string s;
  vector<int> a,b;
  in>>n;
  while(n--){
    in>>x;
    if(x%2==0) e++;
    else o++;
  }
  if(o>0) out<<"First"<<end;
  else out<<"Second"<<end;
  return 0;
}