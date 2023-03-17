#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
   
     if(a>0&&a%5==0)
      {
          a=a/5;
          cout<<a<<endl;
      }
      else
      {
          a=a/5+1;
          cout<<a<<endl;
      }
}