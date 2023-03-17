#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1&&b==2||a==2&&b==1) cout<<"Yes"<<endl;
    else if(a==1&&b==3||a==3&&b==1) cout<<"Yes"<<endl;
    else if(a==4&&b==2||a==2&&b==4) cout<<"Yes"<<endl;
    else if(a==5&&b==2||a==2&&b==5) cout<<"Yes"<<endl;
    else if(a==6&&b==3||a==3&&b==6) cout<<"Yes"<<endl;
    else if(a==7&&b==3||a==3&&b==7) cout<<"Yes"<<endl;
    else if(a==4&&b==8||a==8&&b==4) cout<<"Yes"<<endl;
    else if(a==4&&b==9||a==9&&b==4) cout<<"Yes"<<endl;
    else if(a==5&&b==10||a==10&&b==5) cout<<"Yes"<<endl;
    else if(a==5&&b==11||a==11&&b==5) cout<<"Yes"<<endl;
    else if(a==6&&b==12||a==12&&b==6) cout<<"Yes"<<endl;
    else if(a==6&&b==13||a==13&&b==6) cout<<"Yes"<<endl;
    else if(a==7&&b==14||a==14&&b==7) cout<<"Yes"<<endl;
    else if(a==7&&b==15||a==15&&b==7) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}