#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n=0,maax=0;
    cin>>a;
    int arr[3];
    for(int j=0;j<a;j++)
    {
        for(int i=0;i<3 ;i++){
            cin>>a>>b>>c;
            maax=a;
            maax=max(maax,b);
            maax=max(maax,c);
            if(a==maax&&b==maax)
            {
                maax++;
                cout<<maax-a<<" "<<maax-b<<" "<<maax-c<<"\n";
            }else if(b==maax&&c==maax)
            {
                maax++;
                cout<<maax-a<<" "<<maax-b<<" "<<maax-c<<"\n";
            }else if(c==maax&&a==maax)
            {
                maax++;
                cout<<maax-a<<" "<<maax-b<<" "<<maax-c<<"\n";
            }else{
                if(a==maax)
            cout<<"0 "<<maax+1-b<<" "<<maax+1-c<<"\n";
            else if(maax==b)
            cout<<maax+1-a<<" 0 "<<maax+1-c<<"\n";
            else
            cout<<maax+1-a<<" "<<maax+1-b<<" 0\n"; 
            }
        }        
    }
        
    return 0;
}