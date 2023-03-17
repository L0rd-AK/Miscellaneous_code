#include <iostream>
using namespace std;
int main()
{
    int d,h,m,s,d1,h1,m1,s1,time=0,time2,time1,day,hour,minute,second;
    string str;

    cin>>str>>d>>h>>str>>m>>str>>s;
    cin>>str>>d1>>h1>>str>>m1>>str>>s1;

    time1=(d*24*3600)+(h*3600)+(m*60)+s;
    time2=(d1*24*3600)+(h1*3600)+(m1*60)+s1;
    time=(time2-time1);
    day=(time/86400);
    time=time%86400;
    hour=time/3600;
    time=time%3600;
    minute=time/60;
    time=time%60;
    second = time;

    cout<<day<<" dia(s)"<<endl;
    cout<<hour<<" hora(s)"<<endl;
    cout<<minute<<" minuto(s)"<<endl;
    cout<<second<<" segundo(s)"<<endl;


    return 0;
}