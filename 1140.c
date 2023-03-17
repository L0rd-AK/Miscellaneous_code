#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    
    while(1)
    {
        char s[100];
        gets(s);
        if(s[0]=='*') break;
        int size=strlen(s),y=0,n=0,count=0;
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
        if(count==y) printf("Y\n");
        else printf("N\n");
    }

    return 0;
}