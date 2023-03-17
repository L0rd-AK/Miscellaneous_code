#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
            vector <string> arr;
            int t,max=-1,size,flag=0;
            cin>>t;
        if(t==0) break;
            for(int i=0;i<t;i++)
            {
                string s;
                cin>>s;
                size=s.length();
                if(size>max)
                {
                    max=size;
                }
                arr.push_back(s);
            }
            
            for(int i=0;i<t;i++)
            {
                
                int length,arrLength;
                arrLength=arr[i].length();
                length=abs(max-arrLength);
                if(arrLength!=max)
                {
                    for(int j=0;j<length;j++)
                    {
                        cout<<" ";
                    }
                }
                cout<<arr[i]<<endl;
            }
            cout<<endl;
    }


    return 0;
}