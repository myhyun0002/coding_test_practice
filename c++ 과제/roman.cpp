#include<bits/stdc++.h>

using namespace std;

void solve();
int STR(string s);


int main()
{
	string s;
	getline(cin, s);
  cout << STR(s) << endl;
  return 0;
}

int STR(string s)
{
	int ret = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == 'I') {
			if (i != s.length() - 1 && (s[i + 1] == 'X' || s[i+1]=='V'))
				ret -= 1;
			else ret += 1;
		}
		else if (s[i] == 'X') {
			if (i != s.length() - 1 && (s[i + 1] == 'C' || s[i+1]=='L'))
				ret -= 10;
			else ret += 10;
		}
		else if (s[i] == 'V')ret += 5;
		else if (s[i] == 'L')ret += 50;
    else if (s[i] == 'C')ret += 100;
	}
	return ret;
}