#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        string s;
        char ss[100];
        getline(cin,s);
        if(s[0]=='0') 
        {
            cout<<ss<<endl;
            break;
        }
        int j=0,jj,c=0,max=-1,size = s.length(),count=0;
        for(int k=0;k<size;k++)
        {
            if(s[k]==' ') c++;
        }
        for(int i=0;i<c+1;i++)
        {
            
            for(;j<size;j++)
            {
                if(s[j]==' ')
                {
                    j++;
                    break;
                }
                else
                {
                    jj=j;
                    count++;
                }
            }
            if(i==c)
            {
                cout<<count;
                char ss[count];
                if(max>=count)
                  {
                      max=count;
                      jj=jj-count+1;
                      for(int z=0;z<count;z++,jj++)
                      {
                          ss[z]=s[jj];
                      }
                      jj=0;
                    }
                count=0;
            }
            else
            {
                cout<<count<<"-";
                ss[count];
                if(count>=max)
                  {
                      max=count;
                      jj=jj-count+1;
                      for(int z=0;z<count;z++,jj++)
                      {
                          ss[z]=s[jj];
                      }
                      jj=0;
                    }
                count=0;
            }
        }
        
        cout<<endl;
    }
}