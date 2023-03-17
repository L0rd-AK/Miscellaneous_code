#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int h,m,s;
    cin>>h>>m>>s;
    if(h>24||m>60||s>60){cout<<"Please enter the right value"<<endl;}
    while(1){
        if(h==0&&m==0&&s==0){break;}
        if(s==0&&m==0){h--;m=60;}
        if(s==0){m--;s=60;}
        system("cls");
        cout<<h<<":"<<m<<":"<<s--;
        _sleep(1000);
    }
    return 0;
}