#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        long int b, a,sum=0,rem=0;
        for(int i=0;i<t;i++)
        {
            cin>>a;
            for(int j=0;;j++)
            {
                rem=a%10;
                a=a/10;
                sum+=rem*pow(2,j);
                if(a==0) break;
            }
            //if(sum>=97&&sum<=122) 
            printf("%c ",sum);
            sum=0;
        }
    }


    return 0;
}