#include <iostream>
 
using namespace std;
 
int main() {
  int a,b;
  double pi=3.1415;
  cin>>a>>b;
    int v=(4*pi*a*a*a)/3;
    int ans=b/v;
    cout<<v<<endl;
    cout<<ans<<endl;
return 0;
}