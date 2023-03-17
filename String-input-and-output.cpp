#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    string s,s1,s2;
    getline(cin,s);
    getline(cin,s1);
    getline(cin,s2);

    cout<<s<<s1<<s2<<endl;
    cout<<s1<<s2<<s<<endl;
    cout<<s2<<s<<s1<<endl;
    cout<<s.substr(0, 10)<<s1.substr(0, 10)<<s2.substr(0, 10)<<endl;
    

    return 0;
}