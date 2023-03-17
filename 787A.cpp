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
  long long int a,b,c,d;
  double j;
  char ch;
  string s;
  //vector<int> a,b;
  in>>a>>b>>c>>d;
  f1(i,0,100){
    j=(b+a*i-d)*1.0/c;
    if(j>=0&&j==(int)j){
      out<<b+a*i;
      return 0;
    }
  }
  out<<-1;
  return 0;
}