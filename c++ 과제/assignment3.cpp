#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int change_to_int (char c){
  if(c == 'I'){
    return 1;
  }else if(c == 'V'){
    return 5;
  }else if(c == 'X'){
    return 10;
  }else if(c == 'L'){
    return 50;
  }else if(c == 'C'){
    return 100;
  }
  return 0;
}

string seperate_by_seperator (int position,string seperator,string str){
  string front_str;
  string back_str;
  string seperator_string[6] = {"IXL","IXC","IV","IX","XL","XC"};
  int seperator_len[6] = {3,3,2,2,2,2};

  front_str = str.substr(0,position);
  for(int i = 0 ; i < 6 ; i++){
    if(seperator == seperator_string[i]){
      back_str = str.substr(position + seperator_len[i]);
      break;
    }
  }

  str = front_str + back_str;
  return str;
}

int main(){
  string str;
  long unsigned int position;
  int result = 0;
  string seperator[6] = {"IXL","IXC","IV","IX","XL","XC"};
  int seperator_value[6] = {49,99,4,9,40,90};
  int break_int = 0;

  getline(cin, str);
  while (true){
    break_int = 0;
    
    for(int i = 0 ; i < 6 ; i++){
      if((position = str.find(seperator[i],0))!= string::npos){
      str = seperate_by_seperator(position,seperator[i],str);
      result = result + seperator_value[i];
      break_int = 1;
      break;
      }
    }
    if(break_int == 0){
      break;
    }
  }

  for(long unsigned int i = 0 ; i < str.length() ; i++){
    result += change_to_int(str[i]);
  }

  cout << result;
  return 0;
}