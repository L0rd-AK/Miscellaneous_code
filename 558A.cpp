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
//#define end endl
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)

int main() 
{
  ll n,d;
  char ch;
  string s;
  //vector<int> a,b;
  in>>n;
  ll x[n],a[n],pos=0,neg=0,apple_sum=0;
 
  f(i,0,n){
    cin>>x[i]>>a[i];
    apple_sum+=a[i];
    if(x[i]>0){
      pos++;
    }
    else if(x[i]<0){
      neg++;
    }
  }
  //========================
  ll neg_x[neg],neg_a[neg],pos_x[pos],pos_a[pos];
  ll j=0,k=0;
  f(i,0,n){
    if(x[i]>0){
      pos_x[j]=x[i];
      pos_a[j]=a[i];
      j++;
    }
    else if(x[i]<0){
      neg_x[k]=x[i];
      neg_a[k]=a[i];
      k++;
    }
  }
  //===============================
  ll ans=0;
  if(pos==neg){out<<apple_sum; return 0;}
  else if(pos>neg){
    vector<pair<int,int>> neg_tree;//(neg);
    f(i,0,neg){
      neg_tree.push_back(make_pair(neg_x[i],neg_a[i]));
    }
    sort(neg_tree.begin(),neg_tree.end());
    vector<pair<int,int>> pos_tree;//(pos);
    f(i,0,pos){
      pos_tree.push_back(make_pair(pos_x[i],pos_a[i]));
    }
    sort(pos_tree.begin(),pos_tree.end());
    //=======================================
    f(i,0,neg){
      ans+=neg_tree[i].second;
    }
    f(i,0,neg+1){
      ans+=pos_tree[i].second;
    }
  }else if(neg>pos){
    vector<pair<int,int>> neg_tree;//(neg);
    f(i,0,neg){
      neg_tree.push_back(make_pair(neg_x[i],neg_a[i]));
    }
    sort(neg_tree.begin(),neg_tree.end());
    reverse(neg_tree.begin(),neg_tree.end());
    vector<pair<int,int>> pos_tree;//(pos);
    f(i,0,pos){
      pos_tree.push_back(make_pair(pos_x[i],pos_a[i]));
    }
    sort(pos_tree.begin(),pos_tree.end());
    //==================================
    f(i,0,pos){
      ans+=pos_tree[i].second;
    }
    f(i,0,pos+1){
      ans+=neg_tree[i].second;
    }
  }

  out<<ans;
   
  return 0;
}