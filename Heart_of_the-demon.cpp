#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
    string s,s2;
    cin>>n;
    int arr[n],arr1[n];
	for(int i=0;i<n;i++)
	 {
	   cin>>arr[i];
       s.push_back(arr[i]);
	 }
     
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		 {
		 	if(arr[j]>arr[j+1])
		 	{
		 		swap(arr[j],arr[j+1]);
		 	}
	    }
	}
   
    for(int i=0;i<5;i++)
    {
		for(int j=0;j<5;j++)
        {
            if(arr[i]==s[j])
            {
               sum=sum+j;
               for(int i=j;i<n;i++)
                {
                    s[i]=s[i+1];
                }
               
            }
            
        }
    }
    cout<<sum<<" "<<arr[n/2]<<endl;

    
	
	return 0;
}