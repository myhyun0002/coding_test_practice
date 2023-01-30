#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int N;
  cin >> N;
  int result_ = pow(2,N);
  int result_0 = N*pow(2,N-1);
  int result_00 = 0;
  int result = pow(2,N) + N*pow(2,N-1) + N*(N-1)*pow(2,N-2)/2;
  int mod = 1000000007;

  cout << result << endl;
  cout << result%mod << endl;

  return 0;
}