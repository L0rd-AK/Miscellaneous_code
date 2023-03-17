#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string qs,ts;
    cout<<"Enter query string: "<<endl;
    cin>>qs;
    cout<<"Enter target string: "<<endl;
    cin>>ts;
    sort(qs.begin(),qs.end());
    sort(ts.begin(),ts.end());
    for(int i=0;i<qs.length();i++){
        if(qs[i]!=qs[i+1]){
            qs.push_back(qs[i]);
            //qs[i]=qs[i+1];
        }
    }
    cout<<qs<<endl;

    return 0;
}