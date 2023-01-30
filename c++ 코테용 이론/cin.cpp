#include<bits/stdc++.h>
using namespace std;

int n,m, a[10][10];
string s;

/*
문자 -> 숫자 : 문자 - '0'

숫자 -> 문자 : 숫자 + '0'
*/

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> n >> m;
  for(int i = 0 ; i < n ;i++){
    cin >> s;
    for(int j = 0 ; j < m ; j++){
      a[i][j] = s[j] - '0';
    }
  }

  for(int i = 0 ; i < n ; i++){
    for (int j = 0 ; j < m ; j++){
      cout << a[i][j];
    }
    cout << '\n';
  }
  

  return 0;
}