#include <iostream>
using namespace std;
int main(){
    int n, sum=0;string s;
    cin>>n;
    for(int i=0;i<n;i++){
           cin>>s;sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
            sum+=2;
            }else if(s[i]=='2'){
            sum+=5;
            }else if(s[i]=='3'){
            sum+=5;
            }else if(s[i]=='4'){
            sum+=4;
            }else if(s[i]=='5'){
            sum+=5;
            }else if(s[i]=='6'){
            sum+=6;
            }else if(s[i]=='7'){
            sum+=3;
            }else if(s[i]=='8'){
            sum+=7;
            }else if(s[i]=='9'){
            sum+=6;
            }else if(s[i]=='0'){
            sum+=6;
            }
      }
       cout<<sum<<" "<<"leds"<<endl;
    }
   // cout<<sum<<" "<<"leds"<<endl;
    return 0;
}