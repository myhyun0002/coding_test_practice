#include <iostream>
#include <math.h>
using namespace std;

// 최대 공약수 계산 함수
// (Euclidean Algorithm; Euclid's Algorithm)
int gcd(int a, int b) {

  while (b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }

  return abs(a);
}

int* reduceFraction(int bunja, int bunmo) {   //분자 분모 약분 함수
  static int frac[2];
  frac[0] = bunja;
  frac[1] = bunmo;

  if (frac[1] == 0) { // 분모가 0일 경우에 에러 반환
    frac[0] = 0;
    frac[1] = 0;

    return frac;
  }

  // 함수와 변수명을 모두 gcd 로 하면 "error C2064: term does not evaluate to a function taking 2 arguments" 이러 에러 발생함
  int gcd_result = gcd(frac[0], frac[1]);

  frac[0] = frac[0] / gcd_result;
  frac[1] = frac[1] / gcd_result;

  return frac;
}



int main(){
  int p;      // 분자
  long long q;      // 분모
  int p_2 = 1;  // 분자가 1인 분수의 분자
  int q_2;      // 분자가 1인 분수의 분모
  int count = 0 ; 
  int* bunsu;

  cin >> p >> q;

  while(p != 0){
    if(q%p == 0){
      q_2 = q/p;
    }else{
      q_2 = q/p + 1;
    }

    if(q != q_2){

      p = p*q_2 - p_2*q;
      q = q*q_2;

    }else if(q == q_2){
      q = q_2;
      p = p - p_2;
    }
    
    bunsu = reduceFraction(p,q);    // 분자 분모 약분
    p = bunsu[0];
    q = bunsu[1];

    count += 1;
  }

  cout << count;
  return 0;
}