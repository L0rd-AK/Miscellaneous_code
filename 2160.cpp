#include <iostream>

using namespace std;

int main()
{
   string s;
   getline(cin,s);
   if(s.length()>80)
   {
       cout<<"NO"<<endl;
   }
   else
   {
       cout<<"YES"<<endl;
   }

    return 0;
}
