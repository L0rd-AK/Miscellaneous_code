#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count1=0,count2=0,count3=0;
        string s,s1="one",s2="two",s3="three";
        cin>>s;
        //cout<<s.length()<<endl;
        if(s.length()==3)
        {
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==s1[j]) count1++;
                else if(s[j]==s2[j]) count2++;
            }
        }
        else if(s.length()==5)
        {
            for(int j=0;j<5;j++)
            {
                if(s[j]==s3[j]) count3++;
            }
        }

        if(count1>=2) cout<<1<<endl;
        else if(count2>=2) cout<<2<<endl;
        else if(count3>=4) cout<<3<<endl;
    }
    return 0;
}