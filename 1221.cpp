#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int t, n, c;
  cin >> t;
  for (int i = 0; i < t; i++)
    {
      cin >> n;
      if (n == 0)
      {
        cout << "Not Prime" << endl;
        continue;
      }
	
      if (n == 1)
      {
        cout << "Not Prime" << endl;
        continue;
      }
      if (n == 2)
	  {
        cout << "Prime" << endl;
        continue;
      }
        c=0;
      for (int i = 2; i <= sqrt(n); i++)
	    {
	        if (n % i == 0) c++;
	        if (c == 2) break;
	    }
            if (c >= 1)
	            cout << "Not Prime" << endl;
            else
	            cout << "Prime" << endl;
    }


  return 0;
}
