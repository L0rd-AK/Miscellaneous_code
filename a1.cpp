// Online C compiler to run C program online
#include <stdio.h>

int main() {
    while(1)
    {
    int n,count=0,c=0,r=0,g=0;
    
    scanf("%d",&n);
    int s[n];
    if(n==0)
    {
        break;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    if(s[n-1]<s[0] &&s[0]>s[1]||s[n-1]>s[0] &&s[0]<s[1])
    {
        c++;
    }
    printf("1st %d\n",c);
    for(int j=0;j<n/2;j++)
    {
    if(s[0+j]<s[1+j]&& s[2+j]<s[1+j] || s[0+j]>s[1+j] && s[2+j]>s[1+j] )
    {
        count++;
        
    }
    }
    printf("2nd %d\n",count);
    if(s[n-2]<s[n-1] &&s[0]<s[n-1]||s[n-2]>s[n-1] &&s[0]>s[n-1])
    {
        g++;
    }
   printf("3rd %d\n",g);
    r=c+count+g;
printf("%d\n",r);
}
    return 0;
}