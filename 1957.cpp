#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


void DecToHex(int a){
    double rem;
    vector<int> arr;
     for(int i=0;a!=0;i++){
        rem=a%16;
        arr.push_back(rem);
        a=a/16;
    }
    
    reverse(arr.begin(), arr.end());
    
    for(int i=0;i<arr.size();i++){

        switch (arr[i])
        {
        
        case 0:
            cout<<"0";
            break;
        case 1:
            cout<<"1";
            break;
        case 2:
            cout<<"2";
            break;
        case 3:
            cout<<"3";
            break;
        case 4:
            cout<<"4";
            break;
        case 5:
            cout<<"5";
            break;
        case 6:
            cout<<"6";
            break;
        case 7:
            cout<<"7";
            break;
        case 9:
            cout<<"9";
            break;
        case 10:
            cout<<"A";
            break;
        case 11:
            cout<<"B";
            break;
        case 12:
            cout<<"C";
            break;
        case 13:
            cout<<"D";
            break;
        case 14:
            cout<<"E";
            break;
        case 15:
            cout<<"F";
            break;
        
        
        default:
            break;
        }
    }
    cout<<endl;
}
void DecToBin(int a){
    double rem;
    vector<int> arr;
     for(int i=0;a!=0;i++){
        rem=a%2;
        arr.push_back(rem);
        a=a/2;
    }
    
    reverse(arr.begin(), arr.end());
    for(int i=0;i<arr.size();i++){

        switch (arr[i])
        {
        
        case 0:
            cout<<"0";
            break;
        case 1:
            cout<<"1";
            break;
        
        default:
            break;
        }
    }
    cout<<endl;
}


int main(){
    int n,a;
    cout<<"Choose an option"<<endl;
    cout<<"1) Decimal To Binary"<<endl;
    cout<<"2) Decimal To Hexadecimal"<<endl;
    cin>>n;
    if(n==1){
        cout<<"Enter the Decimal Value: "<<endl;
        cin>>a;
        DecToBin(a);
    }else if(n==2){
        cout<<"Enter the Decimal Value: "<<endl;
        cin>>a;
        DecToHex(a);
    }
    


    return 0;
}