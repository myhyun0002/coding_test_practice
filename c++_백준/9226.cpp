#include <iostream>
#include <string>
using namespace std;

int main(){
  string s = "aeiou";
  string input_s;
  int count = 0;
  int length_s = 0;
  string result = "";

  cin >> input_s;
  while(input_s.find('#')){
    length_s = input_s.length();
    for(char a : input_s){
      if(s.find(a) != std::string::npos){
        input_s.erase(0,count);
        cout << input_s << result << "ay"<<"\n";
        break;
      }
      count++;
      result = result + a;
    }
    if(count == length_s){
      cout << "if문 실행";
      cout << input_s << "ay" << "\n";
    }
      cin >> input_s;
      result = "";
      count = 0;
  }


  return 0;
}