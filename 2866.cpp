#include <iostream>
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s[1000];
    while(t--)
    {
        scanf("%s",s);
        int ln=strlen(s);
        for(int i=ln-1;i>=0;i--)
        {
            if(s[i]>='a'&&s[i]<='z') printf("%c",s[i]);
            else continue;
        }
        printf("\n");
    }
}
