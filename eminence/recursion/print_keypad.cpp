#include<iostream>

using namespace std;

char keys[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void print_keypad(int num, string output=""){
    if(num == 0 || num == 1){
      cout << output << endl;
      return;
    }
    int new_num = num / 10;
    int rem = num % 10;
    for(int i = 0; keys[rem][i] != '\0'; i++){
      print_keypad(new_num, keys[rem][i]+output);
    }
}

int main(){
  int num;
  cin >> num;
  print_keypad(num);

  return 0;
}
