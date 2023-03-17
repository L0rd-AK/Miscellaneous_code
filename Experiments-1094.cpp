#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,rab=0,rat=0,frog=0,sum=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        sum+=n;
        if(s[0]=='C'){
            rab+=n;
        }
        else if(s[0]=='R'){
            rat+=n;
        }
        else if(s[0]=='S'){
            frog+=n;
        }
    }

    cout<<"Total: "<<sum<<" cobaias\n"
          "Total de coelhos: "<<rab<<"\n"
          "Total de ratos: "<<rat<<"\n"
          "Total de sapos: "<<frog<<endl;

          float rabbit=((float)(rab)/(float)(sum)*100);
          float Rat=((float)(rat)/(float)(sum)*100);
          float Frog=((float)(frog)/(float)(sum)*100);

    printf("Percentual de coelhos: %.2f %\n", rabbit);
    printf("Percentual de ratos: %.2f %\n", Rat);
    printf("Percentual de sapos: %.2f %\n", Frog);
    



    return 0;
}