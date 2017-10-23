#include<bits/stdc++.h>

using namespace std;

void helper(int begin, string str_out, int n){
  if(n == 0){
    cout << str_out << " ";
    return;
  }
  for(int i = begin; i <= 9; i++){
    string str = str_out + (char)(i+48);
    helper(i+1, str, n-1);
  }
}

void printIncreasingNumbers(int n){
  helper(1, "", n);
}

int main(){
  int n;
  cin >> n;
  printIncreasingNumbers(n);
  cout << endl;
}
