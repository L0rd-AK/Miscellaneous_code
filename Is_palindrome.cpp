#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
	string S, s1;
	cin >> S;
	for(int i=0;i<S.length();i++)
		{
				s1.push_back(S[i]);
		}
	 reverse(S.begin(),S.end());
	if(S==s1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}
