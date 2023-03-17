#include <stdio.h>
#include<string.h>
int main()
{
    char s[21],ss[21];
    
            scanf("%s%s",s,ss);
            for(int i=0;;i++)
            {
                if(s[i]==ss[i])
                {
                    continue;
                }
                else if(s[i]>ss[i])
                {
                    //cout<<ss<<"\n"<<s<<endl;
                    printf("%s\n%s",ss,s);
                    break;
                }
                else if(s[i]<ss[i])
                {
                    //cout<<s<<"\n"<<ss<<endl;
                    printf("%s\n%s",s,ss);
                    break;
                }
                else
                {
                    if(strlen(s)<strlen(ss))
                    {
                        //cout<<s<<"\n"<<ss<<endl;
                        printf("%s\n%s",s,ss);
                        break;
                    }
                    else
                    {
                        //cout<<ss<<"\n"<<s<<endl;
                        printf("%s\n%s",ss,s);
                        break;
                    }
                }
            }
    
        return 0;
}