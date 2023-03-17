#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;cin.ignore();
    for(int j=0;j<t;j++)
    {
        char s[50];
        scanf("%s",&s);
        cin>>n;
        int size = strlen(s);
        for(int i=0;i<size;i++)
        {
            s[i]-=n;
            if(s[i]<65)
            {
                s[i]='z'-('a'-s[i]-1);
                cout<<s[i];
            }
            else
            {
                cout<<s[i];
            }
            
        }
        cout<<endl;
    }
}