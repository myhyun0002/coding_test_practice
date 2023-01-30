#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int arr[3][3];
  for (int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      cin >> arr[i][j];
    }
  }

  int arr_row[3];
  int arr_column[3];
  int dae[2];

  int result_current_row = 0;
  int result_current_column = 0;

  for(int i = 0 ; i < 3 ; i++){
    result_current_row = 0;
    result_current_column = 0;

    for(int j = 0 ; j < 3 ; j++){
      result_current_row += arr[i][j];
      result_current_column += arr[j][i];
    }
    arr_row[i] = result_current_row;
    arr_column[i] = result_current_column;
  }

  // 모든 대각끼리 같은지 확인
  int dae_result1 = arr[0][0] + arr[1][1] + arr[2][2];
  int dae_result2 = arr[0][2] + arr[1][1] + arr[2][0];
  dae[0] = dae_result1;
  dae[1] = dae_result2;
  int break_point = 1;

  // for(int i = 0 ; i < 3 ; i++){
  //   cout << arr_column[i] << " ";
  // }
  // cout << endl;

  //   for(int i = 0 ; i < 3 ; i++){
  //   cout << arr_row[i] << " ";
  // }
  // cout << endl;

  //   for(int i = 0 ; i < 2; i++){
  //   cout << dae[i] << " ";
  // }
  // cout << endl;

  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      if(arr_row[j] == arr_column[i])
      {
        for(int k = 0 ; k < 2 ; k++){
          if(dae[k] == arr_row[i]){
          cout << "YES" << endl;
          break_point = 0;
          break;
          }
        }
      }
      // if(break_point == 0){
      //   break;
      // }
    }
    // if(break_point == 0){
    //   break;
    // }
  }



  if(break_point == 1){
    cout << "NO" << endl;
  }

  return 0;
}