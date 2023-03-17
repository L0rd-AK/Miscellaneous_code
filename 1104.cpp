#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b))
    {
        if(a==0&&b==0) break;
        int arr1[a],arr2[b],arr3[a],arr4[b];
        for(int i=0;i<a;i++) scanf("%d", &arr1[i]);
        for(int i=0;i<b;i++) scanf("%d", &arr2[i]);

        int size1=0,size2=0;
        for(int i=0,j=0;i<a;i++)
        {
            if(arr1[i]!=arr1[i+1])
            {
                arr3[j]=arr1[i];j++;size1++; 
            }   
        } 
        //sort(arr2,arr2+b);
        for(int i=0,j=0;i<b;i++)
        {
            if(arr2[i]!=arr2[i+1])
            {
                arr4[j]=arr2[i];j++; size2++;
            }   
        }

        //size1=sizeof(arr3)/sizeof(arr3[0]);
        //size2=sizeof(arr4)/sizeof(arr4[0]);
        //for(int i=0;i<size1;i++) printf("%d ",arr3[i]);
        //printf("\n");
        //for(int i=0;i<size2;i++) printf("%d ",arr4[i]);
        
        int max=0,ans=0;
        if(size1>size2)
        {
            for(int i=0;i<size2;i++)
            {
                max=0;
                for(int j=0;j<size1;j++)
                {
                    if(arr4[i]!=arr3[j]) max++;
                }
                if(max==size1) ans++;
            }
        } 
        else
        {
            for(int i=0;i<size1;i++)
            {
                max=0;
                for(int j=0;j<size2;j++)
                {
                    if(arr3[i]!=arr4[j]) max++;
                }
                if(max==size2) ans++;
            }
        }
        printf("%d\n",ans);
        ans=0;

    }

    return 0;
}