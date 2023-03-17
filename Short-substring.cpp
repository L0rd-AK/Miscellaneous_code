#include <iostream>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        for(int i=0;i<s.length()-1;i+=2){
            cout<<s[i];
        }
        cout<<s[s.length()-1]<<"\n";
    }
    
    return 0;

}