#include <iostream>
#include <stdio.h>
#include <string.h>
int main()
{
    char s[102];
    scanf("%[^\n]s",s);

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==',')printf("\n");
        else printf("%c",s[i]);
    }
    return 0;
}