#include <iostream>
using namespace std;
int main()
{
    string s,ss;
    int max=0,maxx=0;
    while(getline(cin,s)&&getline(cin,ss))
    {
        int size,siz3,count=0;

             max=-1;
             size=ss.length();
             siz3=s.length();
             for(int i=0;i<size;i++)
             { 
                count=0;
                for(int j=0;j<siz3;j++)
                {  
                    for(int k=i,l=j;ss[k]==s[l];k++,l++)
                    {
                        count++;
                    }
                }
                if(count>max) max=count;
             }
        
            maxx=-1;count=0;
            size=s.length();
            siz3=ss.length();
             for(int i=0;i<size;i++)
             { 
                count=0;
                for(int j=0;j<siz3;j++)
                {   
                    if(s[i]==ss[j])
                    {
                        count++;
                        for(int k=i+1;s[k]==ss[j+1];k++,j++)
                        {
                                count++;
                        }
                        break;
                    }
                    
                }
                if(count>maxx) maxx=count;
             }

        if(max>maxx) cout<<max<<endl;
        else cout<<maxx<<endl;
        maxx=0;count=0;
       
    }
}
//If there is no common 
//The search is case