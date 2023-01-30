#include <iostream>
using namespace std;

int main(){
  int result = 0;
  int n = 0;
  int k = 0;
  int add_cuppon = 0;


  while(cin >> n >> k){
    result = n;
    while(1){
      if(n/k == 0){
        break;
      }

      add_cuppon = n/k;
      result += add_cuppon;
      n = n%k+ add_cuppon;

    }
    cout << result << "\n";

  }

  return 0;
}