#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0,maxx=0;
    
    string s;
    while(cin>>s){
        vector<int> a= {0,0,0,0,0,0,0,0,0,0};
        for(int i=0;i<s.length();i++){

            if(s[i]=='0'){
                a[0]++;
            }else if(s[i]=='1'){
                a[1]++;
            }else if(s[i]=='2'){
                a[2]++;
            }else if(s[i]=='3'){
                a[3]++;
            }else if(s[i]=='4'){
                a[4]++;
            }else if(s[i]=='5'){
                a[5]++;
            }else if(s[i]=='6'){
                a[6]++;
            }else if(s[i]=='7'){
                a[7]++;
            }else if(s[i]=='8'){
                a[8]++;
            }else if(s[i]=='9'){
                a[9]++;
            }
            
        }
        maxx=-99;ans=-99;
        for(int i=0;i<10;i++){
             //cout<<a[i]<<" ";
             if(a[i]>=maxx){
                 maxx=a[i];
                 ans=i;
                
             }
         }
         //cout<<endl;
        cout<<"ans: "<<ans<<endl;
    }



    return 0;
}