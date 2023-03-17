#include <iostream>
using namespace std;
int main()
{
    long int a,b,c=0,carry=0,temp1=0,temp2=0;
    while(1)
    {
        cin>>a>>b;
        if(a==0&&b==0) break;
        carry=0,temp1=0,temp2=0,c=0;
        while(1)
        {
                
            temp1=a%10;
            temp2=b%10;
            
            if((temp1+temp2+c)>=10)
            {
                carry++;
                c=1;
            }
            else
            {
                c=0;
            }
            a=a/10;b=b/10;
            if(a==0&&b==0) break;
        }

        if(carry==0) printf("No carry operation.\n");
        else if(carry==1) printf("1 carry operation.\n");
        else printf("%ld carry operations.\n", carry);
    }
}