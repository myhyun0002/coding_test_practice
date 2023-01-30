#include <iostream>
using namespace std;

int prime(int e_d_mod_num)            // (p-1)(q-1)보다 작은 서로소 찾는 함수
{
  int v[e_d_mod_num];
  fill(v,v+e_d_mod_num,0);
  v[0] = 1;
  v[1] = 1;
  int result = 0;

  for (int i = 2; i < e_d_mod_num; i++)
  {
    if (v[i] == 0 && e_d_mod_num % i != 0)
    {
      result = i;
      break;
    }

    for (int j = i; j < e_d_mod_num; j = j + i)
    {
      v[j] = 1;
    }
  }
  return result;
}

int mod(int e, int e_d_mod_num)         // e의 곱셈 역원 찾는 mod 함수
{

  int quotient = 0;       // 몫
  int remainder = 0;      // 나머지
  int quotients[10]; // 몫 집합
  //vector<int> remainders; // 나머지 집합

  int index = 0;
  int n = e_d_mod_num;

  while(e != 0){
    quotient = n / e ;
    remainder = n % e ;

    if(n == quotient){
      quotient = quotient - 1;
    }

    quotients[index] = quotient;

    n = e;       // 다음번에는 n이 그 전의 몫이고
    e = remainder;    // 다음번에는 e가 그 전의 나머지가 된다.

    index = index + 1;
  }
  int y[index + 2];

  y[0] = 0;
  y[1] = 1;

  for (int i = 2; i < index + 2; i++)
  {
    y[i] = (y[i-2] - (y[i - 1] * quotients[i-2]) ) % e_d_mod_num;
  }

  int result = y[index + 1];

  if(result < 0){
    result = 0 - result;
  }
  return result;
}

int encrypt(int M, int e, int n)        // 암호화
{
  int result = M;
  for (int i = 1 ; i < e ; i++){
    result = (result * M) % n;
  }

  return result;
}

int decrypt(int c, int d, int n)          // 복호화
{
  int result = c;
  for (int i = 1 ; i < d ; i++){
    result = (result * c) % n;
  }
  return result;
}

int main()
{
  int p = 7;     
  int q = 17;
  int n = p * q; // 암호키, 복호키의 n
  int e_d_mod_num = (p - 1) * (q - 1);

  int e = prime(e_d_mod_num); // 암호키의 e

  int d = mod(e,e_d_mod_num);   // 복호키의 d

  cout << "p : " << p << endl;
  cout << "q : " << q << endl;
  cout << "n : " << n << endl;
  cout << "e : " << e << endl;
  cout << "d : " << d << endl;
  cout << "암호키 : " << "(" << e << "," << n << ")" << endl;
  cout << "복호키 : " << "(" << d << "," << n << ")" << endl;

  // 2018121068     -> 12, 10, 68 암호화/복호화 진행

  int c = 0;      // 암호문
  int m = 0;      // 복호화 후 평문 
  cout << "\n\n";

  int M1 = 12;
  c = encrypt(M1,e, n);
  m = decrypt(c,d, n);

  cout << "M1 평문 : " << M1 << endl;
  cout << "M1 암호문 : " << c << endl;
  cout << "M1 복호문 : " << m << "\n" << endl;

  int M2 = 10;
  c = encrypt(M2, e, n);
  m = decrypt(c, d, n);

  cout << "M2 평문 : " << M2 << endl;
  cout << "M2 암호문 : " << c << endl;
  cout << "M2 복호문 : " << m << "\n" << endl;

  int M3 = 68;
  c = encrypt(M3, e, n);
  m = decrypt(c, d, n);

  cout << "M3 평문 : " << M3 << endl;
  cout << "M3 암호문 : " << c << endl;
  cout << "M3 복호문 : " << m << "\n" << endl;

  return 0;
}