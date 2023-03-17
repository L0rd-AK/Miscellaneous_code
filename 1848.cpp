#include <iostream>
#include <stdio.h>
#include <math.h>
int convert(int n[]);
int main()
{
    char s[100];int c=0,sum=0,a[3];
    while(1)
    {
        if(c==3) break;
        gets(s);
        if(s[0]=='c')
        {
            printf("%d\n",sum);
            c++;sum=0;
        }
        else
        {
            for(int i=0;i<3;i++)
            {
                if(s[i]=='*') a[i]=1;
                else a[i]=0;
            }
            sum+=convert(a);
        }
    }
}

int convert(int n[]) {
  int dec = 0,i=0,rem=3;

  while (rem--) {
    dec += n[rem] * pow(2, i);
    i++;
  }

  return dec;
}