#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s,s1;
        cin>>s>>s1;

        if(s=="tesoura"&&s1=="papel" || s=="papel"&&s1=="pedra" || s=="pedra"&& s1=="lagarto" || s=="lagarto"&&s1=="Spock" || s=="Spock"&&s1=="tesoura" || s=="tesoura"&&s1=="lagarto" || s=="lagarto"&&s1=="papel" || s=="papel"&&s1=="Spock" || s=="Spock"&&s1=="pedra" || s=="pedra"&&s1=="tesoura" ) 
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(s1=="tesoura"&&s=="papel" || s1=="papel"&&s=="pedra" || s1=="pedra"&&s=="lagarto" || s1=="lagarto"&&s=="Spock" || s1=="Spock"&&s=="tesoura" || s1=="tesoura"&&s=="lagarto" || s1=="lagarto"&&s=="papel" || s1=="papel"&&s=="Spock" || s1=="Spock"&&s=="pedra" || s1=="pedra"&&s=="tesoura" )
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        else if(s==s1)
            cout<<"Caso #"<<i<<": De novo!"<<endl;
    }  

    return 0;     
}