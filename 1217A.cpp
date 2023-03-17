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
  long long int n,str,intl,exp,x,ans;
  char ch;
  string s;
  vector<int> a,b;
  in>>n;
  while(n--){
    in>>str>>intl>>exp;
    x=intl-str;
    if(x>=exp) out<<0<<end;
    else{
      long long int zero=0,g=0;
      ans=((exp+str-intl+1)/2);
      g=max(zero,ans);
      out<<round(g)<<end;
    } 
  }
    
        
  
  
  
  return 0;
}
    
         
    