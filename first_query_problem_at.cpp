#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  long long int n,q,tmp,k,x,ans;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++) cin>>a[i];
  cin>>q;
  while(q--){
    cin>>tmp;
    if(tmp==1){
        cin>>k>>x;
        a[k]=x;
    }
    else{
        cin>>k;
        cout<<a[k]<<endl;
    }
  }
}
