#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    a=a/10;
    if(a%10==4||a%10==7)
    {
        cout<<"YES"<<endl;
    }
    else
      {
          cout<<"NO"<<endl;
      }
}