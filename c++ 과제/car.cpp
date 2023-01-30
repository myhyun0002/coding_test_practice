#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
  int K;  // 주유소 위치
  int M;  // 차 개수
  cin >> K >> M;

  int Ks[K];  // 주유소 위치 저장.
  int Ms[M][2];

  for(int i = 0 ; i < K ; i++){
    cin >> Ks[i];
  }

  for(int i = 0 ; i < M ; i++){
    cin >> Ms[i][0] >> Ms[i][1];
  }

  for(int i = 0 ; i < M ; i++){
    int P = Ms[i][0];
    int C = Ms[i][1];
    int count = 0;

    for(int j = 0 ; j < K ; j++){
      if(P-C <= Ks[j] && Ks[j] <= P+C){
        count += 1;
      }
    }
    cout << count << endl;
  }


  return 0;
}