#include<bits/stdc++.h>
using namespace std;

/*
두가지 쌍을 같이 저장해야 하는 경우엔 pair
세가지 이상의 값을 같이 저장해야 하는 경우엔 tuple


pair

- {a,b}로 값을 넣거나 make_par(a,b)로 값을 넣을 수 있다.
par<int,int> a = {1,2} 처럼 pair 객체 하나에 하나의 쌍만 가능
*/

pair<int,int> pi;
tuple<int,int,int> tl;

int a,b,c;

int main(){
  pi = {1,2};
  tl = make_tuple(1,2,3);

  // pi 의 첫번째 값 1에 접근하려면 원래는 pi.first로 두번째 값 2는 pi.second로 접근
  // 한번에 접근하려면 tie(a,b) = pi 로 하면 a = pi.first, b = pi.second가 된다.
  // tie(a,b) = pi 를 써라.
  tie(a,b) = pi;

  cout << a << " : " << b << "\n";

  tie(a,b,c) = tl;

  cout << a << " : " << b << " : " << c << "\n";
  return 0;
}