#include <iostream>
using namespace std;
int main()
{
    
    while(1)
    {
        string s;
        getline(cin,s);
        if(s[0]=='*') break;
        int size=s.length(),y=0,n=0,count=0;
        for(int i=0;i<size;i++)
        {
            s[i]=tolower(s[i]);
            if (s[i]==' ')
            {
                count++;
            }
            
        }
        for(int i=0;i<size;i++)
        {
            if(s[i]==' '&&s[i+1]==s[0])
            {
                y++;
            }
            else
            {
                n++;
            }
        }
        if(count==y) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }

    return 0;
}