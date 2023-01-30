#include<iostream>
#include<vector>
using namespace std;

int count (int N,int A,int B){
  if (A>B){
    int temp = A;
    A = B;
    B = temp;
  }

  if(A +1 == B && A != 0){
    return 0;
  }
  
  if(A == 0){
    A = -2;
  }
  if(B == 0){
    B = -2;
  }

  int v[N+1];

  fill(v,v + N + 1,0);

  int count = 0;
  v[0] = 1;

  for(int i = 1 ; i <= N; i++){
    if(i == A || i == A + 1 || i == A + 2 || i == B || i == B + 1 ||i == B + 2){
      v[i] = v[i-1];
      count++;
      continue;
    }
    if(count == 0){
      v[i] = 1;
      count++;
    }else{
      v[i] = v[i-1] + v[i-2];
    }
  }

  return v[N];
}

int main(){
  int N,A,B;
  cin >> N >> A >> B;

  cout << count(N,A,B);
  return 0;
}