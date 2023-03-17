#include <iostream>
#include <algorithm>
using namespace std;
int isPalindrome(string S)
{
    string P = S;
 
    reverse(P.begin(), P.end());
 
    if (S == P) {
        return 1;
    }
    else {
        return 0;
    }
}
long long int make_palindrome(string S, long long int A, long long int B) {
    int N = S.length();
    long long int cost = 0;
    for (int i = 0; i < N ; i++) {
        if (S[i] == S[i+1]) cost += A;
        else cost += B;
    }
    return cost;
}
int main()
{
    long long int n,a,b;string s;
    cin>>n>>a>>b;
    cin>>s;
    if(isPalindrome(s))
    {
        cout<<0<<endl;
    }
    else if(a>=b) cout<<(n/2)*a<<endl;
    else
    {
        cout<<make_palindrome(s,a,b);
    }
    cout<<endl;
}