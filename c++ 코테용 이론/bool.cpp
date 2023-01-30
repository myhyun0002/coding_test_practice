#include<bits/stdc++.h>
using namespace std;

/*
bool

0 : false
0이 아닌 모든 값 : true
*/

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int a = -1;
  cout << bool(a) << "\n";

  a = 0;
  cout << bool(a) << "\n";

  a = 3;
  cout << bool(a) << "\n";

  return 0;
}