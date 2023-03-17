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
  long long int n,str,intl,exp;
  char ch;
  string s;
  vector<int> a,b;
  in>>n;
  while(n--){
    in>>str>>intl>>exp;
    if(exp==0) out<<1<<end;
    else if(str<intl&&(str+exp)<=intl) out<<0<<end;
    else if(str>intl) out<<exp-1<<end;
    else if(str<intl&&(str+exp)>intl){
        if(exp%2==0) out<<(exp/2)+1<<endl;
        else out<<n/2<<endl;
    }
    
        
  }
  
  
  return 0;
}
    
         
    