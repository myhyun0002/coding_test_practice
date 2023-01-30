#include<bits/stdc++.h>
using namespace std;

/*
  2차원 배열 탐색 시 
  
  - 바깥쪽 for문을 1번째 차원(행), 안쪽 배열을 2번째 차원(열)으로 하는게 좋다.

  바깥쪽 for문을 2번째 차원(열), 안쪽 배열을 1번째 차원(행)으로 하면 나쁘다.
  

*/
const int mxy = 3;
const int mxx = 4;

int a[mxy][mxx];

int main(){

  for(int i = 0 ; i < mxy; i++){
    for(int j = 0 ; j  < mxx ; j++){
      a[i][j] = (i + j);
    }
  }

  for(int i = 0 ; i < mxy ;i++){
    for(int j = 0 ; j < mxx ; j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "\n";

  for(int i = 0 ; i < mxx; i++){
    for(int j = 0 ; j < mxy ; j++){
      cout << a[j][i]<< " ";
    }
    cout << "\n";
  }
  return 0;
}