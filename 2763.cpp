#include <iostream>
#include <stdio.h>
int main()
{
    char s[14];
    scanf("%s",s);
    for(int i=0;i<14;i++)
    {
        if(s[i]=='.'||s[i]=='-') printf("\n");
        else printf("%c",s[i]);
    }
    printf("\n");

    return 0;
}