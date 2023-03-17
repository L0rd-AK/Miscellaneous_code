#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
    int a[3],b[3];string s;vector<int> v1;
    for(int i=0;i<3;i++)
     {
         cin>>a[i];
         v1.push_back(a[i]);
     }
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<2;j++)
          {
              if(a[j]>a[j+1])
               {
                   swap(a[j],a[j+1]);
               }
          }
     }
     for(int i=0;i<3;i++)
      {
          cout<<a[i]<<endl;
      }
      cout<<""<<endl;
      for(int i=0;i<3;i++)
      {
          cout<<v1[i]<<endl;
      }
      return 0;
}
