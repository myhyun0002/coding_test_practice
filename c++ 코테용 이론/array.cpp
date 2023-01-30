#include<bits/stdc++.h>
using namespace std;

/* 
  배열 (array)
  - 중복 허용, 순서 있음, 같은 타입의 변수들로 이루어져있음

  탐색할 때는 O(1) 그러므로 탐색은 배열로 한다.
  삭제와 데이터추가는 연결리스트로 한다.
  
  vector 와 달리 배열은 처음에 배여르이 크기를 지정해야 합니다.
  vector 와 달리 .erase, .push_back() 같은 메서드가 없습니다.
  
  fill(시작값,끝값,초기화하는 값);
*/

int v[10];

int main(){
  for(int i = 1; i <= 10 ; i++) v[i-1] = i;
  for(int a : v) cout << a << " ";
  cout << "\n";

  auto a = find(v,v+10,100);
  if(a == v+10) cout << "not found" << "\n";

  fill(v,v+10,10);
  for(int a : v)cout << a << " ";
  cout << "\n";


  vector<int> v[10];  // 크기가 10인 벡터 v를 생성
  vector<int> v(n,0); // 0이라는 값을 n개 가진 v 벡터 생성

  vector<vector<int>> check;  // 2차원 배열 생성
  vector<vector<int>> v(n+1, vector<int>(n+1, 0));
  // 0을 n+1개 담은 벡터를 n+1개 담은 2중 벡터 v 생성

  fill(v.begin(),v.end(),0);  // fill로 초기화

/*
  int dp[10] = {0,};  // 크기가 10인 dp 배열의 값을 전부 0으로 초기화
  int dp[10][10] = {{0,}};
  fill(dist,dist+MAX_N,0);


  //  memset(초기화하는 배열, 값, 배열의 크기)  // 배열을 0이나 -1로 초기화할 때 사용
  int a[n] = {0,1};
  memset(check, 0, sizeof(check));  // check : 2차원 배열

  //fill을 이용한 2차원 배열 초기화 
  for(int i = 0 ; i < 10; i++) fill(dp[i],dp[i]+10,0);
  fill(&arr[0][0], &arr[0][0] + n*m, k);

*/

/* 
  memcpy(복사 받은 배열,복사 데이터를 보내느 배열 ,복사 데이터를 보내느 배열의 sizeof )
    memcpy : 배열의 복사
  - 어떤 변수의 메모리에 있는 값들을 다른 변수의 "특정 메모리값"으로 복사할 때 사용합니다. 
  - 주로 배열을 복사할 때 사용

  temp라는 배열에 a 배열의 값을 복사한다.
  memcpy(temp, a, sizeof(a));
*/
  int a[5];
  int temp[5];
  for(int i = 0 ; i < 5 ; i++) a[i] = i;
  memcpy(temp,a,sizeof(a));
  for(int i : temp) cout << i << " ";


  return 0;
}