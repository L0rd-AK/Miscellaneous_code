#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
       for(int i=0;i<n;i++)
      {
          if(arr[i]==1)
           {
               cout<<"HARD"<<endl;
               break;
           }
           else
            {
                count++;
            }
      }
      if(count==n)
       {
           cout<<"EASY"<<endl;
       }
}