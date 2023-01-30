#include<bits/stdc++.h>
using namespace std;

/*
  vector
  - 동적으로 요소 할당
  - 컴파일 시점에 배열의 개수를 알 수 없을 때 사용
  - 중복 허용
  - 순서 있음
  - 랜덤 접근 가능
*/
void f(vector<int> &v){
  v[0] = 100;
}

void f(vector<vector<int>> &v){
  vector<int> vv;
  vv.push_back(10000);
  v.push_back(vv);
}

int main(){

  vector<int> v;

// 1 2 3 4 5 6 7 8 9 10
  for(int i = 1 ; i <= 10 ; i++) v.push_back(i);
  for(int a : v) cout << a << " ";
  cout << "\n";
  v.pop_back();                   // .pop_back() : 맨 뒤에 있는 요소 삭제
  
// 1 2 3 4 5 6 7 8 9
  for(int a : v) cout << a << " ";
  cout << "\n";
  
  v.erase(v.begin(),v.begin()+1);   // .erase : 요소 삭제

// 2 3 4 5 6 7 8 9
  for(int a : v) cout << a << " ";
  cout << "\n";

  auto a = find(v.begin(),v.end(),100);     // find : 요소 search
  if(a == v.end()) cout << "not found" << "\n";

// 10 10 10 10 10 10 10 10 10 10
  fill(v.begin(),v.end(),10);         // fill(start,end,10) : start부터 end까지 10으로 채운다. 
  for(int a : v) cout << a << " ";
  cout << "\n";

  v.clear();                        // .clear() : 요소 전부 삭제
  cout << "아무것도 없을까?\n";

  for(int a : v) cout << a << " ";
  cout << "\n";



  vector<int> v1;
  for(int i = 1; i <= 3; i++) v1.push_back(i);
  f(v1);
  for(int i : v1) cout << i << " ";
  cout << "\n";



  vector<vector<int>> v2;
  f(v2);
  for(int i : v2[0]) cout << i << " ";
  
  return 0;

}

