#include <stdio.h>
#include <string.h>
int main()
{
    char s[40];
    while(gets(s))
    {
        int ln=strlen(s),A=0,a=0,n=0,c=0;
        for(int i=0;i<ln;i++)
        {
            if(ln>=6&&ln<=32)
            {
                if(s[i]>='A'&&s[i]<='Z') A++;
                else if(s[i]>='a'&&s[i]<='z') a++;
                else if(s[i]>=48&&s[i]<=57) n++;
                else
                {
                    c++;
                    printf("Senha invalida.\n");
                    break;
                }
            }
            else{c++;printf("Senha invalida.\n");break;} 
           
        }
        if(c==0)
        {
            if(A>0&&a>0&&n>0) printf("Senha valida.\n");
            else printf("Senha invalida.\n");
        }
    }
}