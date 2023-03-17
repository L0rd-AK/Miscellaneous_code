#include <stdio.h>
#include <string.h>
int main()
{
    char s[102];int count=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='1')
        {
            count++;
        }
    }
    if(count%2==0)
    {
        //cout<<s<<'0'<<endl;
        printf("%s0",s);
    }
    else
    {
        //cout<<s<<'1'<<endl;
        printf("%s1",s);
    }



    return 0;
}