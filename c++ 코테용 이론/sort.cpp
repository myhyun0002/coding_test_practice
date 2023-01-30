#include<bits/stdc++.h>
using namespace std;

/*
  sor()

  - 배열 등 컨테이너들(같은 타입의 여러 색체를 저장하는 집합 , 가령 배열 ,vector)의 
  요소를 정렬하는 함수
  - array, vector 정렬할 때 사용
  
  sort(배열의 첫번째 요소, 배열의 마지막 요소 + 1, *커스텀비교함수)

  배열의 마지막 요소는 포함되지 않으니 +1한 값을 넣어야 합니다.

  크기가 5인 배열 a의 인덱스는 0 1 2 3 4 겠죠?
  이럴 땐 sort(a[0], a[0] + 5) 해야 합니다.
  원래는 a[0] + 4가 마지막 요소인데 +1을 해서 +5 입니다.


  세번째 파라미터는 커스텀 비교함수인데 default는 오름차순입니다.
  내림차순으로 바꿀려면 greater<int>() 넣으면 됩니다.
  오름차순은 less<int>()입니다.
*/
vector<int> a;
int b[5];

int main(){
  for(int i = 5; i >= 1 ; i--) b[i-1] = i;
  for(int i = 5 ; i >= 1 ; i--) a.push_back(i);

  // 오름차순
  sort(b,b+5);
  sort(a.begin(),a.end());
  for(int i : b) cout << i << " ";
  cout << "\n";
  for(int i : a) cout << i << " ";
  cout << "\n";

  sort(b,b+5,less<int>());
  sort(a.begin(),a.end(), less<int>());
  for(int i : b) cout << i << " ";
  cout << "\n";
  for(int i : a) cout << i << " ";
  cout << "\n";

  // 내림차순
  sort(b,b+5,greater<int>());
  sort(a.begin(),a.end(), greater<int>());
  for(int i : b) cout << i << " ";
  cout << "\n";
  for(int i : a) cout << i << " ";
  cout << "\n";


/*
  pair sort() 경우

  pair.first 요소 기준으로 먼저 오름차순하고 second 요소 기준으로 오름차순된다.
*/

  vector<pair<int,int>> v;

  for(int i = 10 ; i >= 1 ; i--){
    v.push_back({i,10-i});
  }

  sort(v.begin(), v.end());

  for(auto it : v) cout << it.first << " : " << it.second << "\n";

  return 0;
}