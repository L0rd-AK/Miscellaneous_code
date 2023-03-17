#include <iostream>
#include <stdio.h>
#include<string.h>
using namespace std;
int main()
{
    
    int t;
    scanf("%d%*c",&t);
    for(int i=0;i<t;i++)
    {
        char s[202],ch[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        scanf("%[^\n]%*c",&s);
        int length=strlen(s);
        //for ( length = 0; s[length] != '\0'; ++length);
        int a[26];
        // for(int j=0;j<length;j++)
        // {
        //     if(s[j] >= 65 && s[j] <= 90) s[j] += 32;               
        // }
        for(int j=0;j<26;j++)
        {
            a[j]=0;
        }
        for(int j=0;j<length;j++)
        {
            s[j]=tolower(s[j]);
            if(s[j]=='a')
            {
                a[0]++;
            }
            else if(s[j]=='b')
            {
                a[1]++;
            }             
            else if(s[j]=='c')
            {
                a[2]++;
            }             
            else if(s[j]=='d')
            {
                a[3]++;
            }             
            else if(s[j]=='e')
            {
                a[4]++;
            }             
            else if(s[j]=='f')
            {
                a[5]++;
            }             
            else if(s[j]=='g')
            {
                a[6]++;
            }             
            else if(s[j]=='h')
            {
                a[7]++;
            }             
            else if(s[j]=='i')
            {
                a[8]++;
            }             
            else if(s[j]=='j')
            {
                a[9]++;
            }             
            else if(s[j]=='k')
            {
                a[10]++;
            }             
            else if(s[j]=='l')
            {
                a[11]++;
            }             
            else if(s[j]=='m')
            {
                a[12]++;
            }             
            else if(s[j]=='n')
            {
                a[13]++;
            }             
            else if(s[j]=='o')
            {
                a[14]++;
            }             
            else if(s[j]=='p')
            {
                a[15]++;
            }             
            else if(s[j]=='q')
            {
                a[16]++;
            }             
            else if(s[j]=='r')
            {
                a[17]++;
            }             
            else if(s[j]=='s')
            {
                a[18]++;
            }             
            else if(s[j]=='t')
            {
                a[19]++;
            }             
            else if(s[j]=='u')
            {
                a[20]++;
            }             
            else if(s[j]=='v')
            {
                a[21]++;
            }             
            else if(s[j]=='w')
            {
                a[22]++;
            }             
            else if(s[j]=='x')
            {
                a[23]++;
            }             
            else if(s[j]=='y')
            {
                a[24]++;
            }             
            else if(s[j]=='z')
            {
                a[25]++;
            }             
        }
        int maxx=-1;
        for(int j=0;j<26;j++)
        {
            if(a[j]>maxx)
            {
                maxx=a[j];
            }
        }
        for(int j=0;j<26;j++)
        {
            if(a[j] == maxx)
             printf("%c",ch[j]);
        }
         cout<<endl;
    }
    return 0;
}