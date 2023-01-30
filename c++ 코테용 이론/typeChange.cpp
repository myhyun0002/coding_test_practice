#include<bits/stdc++.h>
using namespace std;

/*
  double -> int
  - double 앞에 (int) 붙여주면 됨

  연산 시에는 형을 맞춰야 한다.
  int는 int 끼리
  double은 double 끼리

  안그래도 되지만 맞추는게 편함
*/

void double_change(){
  double ret = 2.12345;
  int n = 2;
  int a = (int)round(ret/double(n));
  cout << a << "\n";
}

/*
  문자 -> 숫자 , 숫자 -> 문자 (아스키코드 활용)

  아스키코드
  A ~ Z = 65 ~ 90 
  a ~ z = 97 ~ 122

  int('a') 하면 'a'의 아스키코드는 97이므로 97이 나온다.
*/

void string_to_int_change(){
  char a = 'a';
  cout << (int)a - 97 << "\n";
}



int main(){
  string_to_int_change();
  return 0;
}