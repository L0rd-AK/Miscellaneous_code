#include <iostream>
using namespace std;
int main(){
    int n, count;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[i]>0){
            count++;
        }
    }
       cout<<count<<endl;
        return 0;
}