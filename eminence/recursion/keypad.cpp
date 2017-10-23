#include<iostream>
#include<string>

using namespace std;

const char keys[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int keypad(int num, string output[]){
  if(num == 0 || num == 1){
    output[0] = keys[0];
    return 1;
  }
  int new_num = num/10;
  int rem = num%10, k = 0;
  int smallOutputSize = keypad(new_num, output);
  string* temp = new string[4000];
  for(int i=0; i<smallOutputSize; i++){
    for(int j=0; keys[rem][j] != '\0'; j++){
      temp[k++] = output[i] + keys[rem][j];
    }
  }
  for(int i=0; i<k;i++){
    output[i] = temp[i];
  }
  return k;
}


int main(){
  int n;
  cin >> n;
  string* output = new string[4000];
  int count = keypad(n, output);
  for(int i=0; i < count; i++){
    cout << output[i] << endl;
  }
  
  return 0;
}
