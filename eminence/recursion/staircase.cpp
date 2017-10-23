#include<iostream>

using namespace std;

int staircase(int num){
  if(num == 1){
    return 1;
  }
  if(num == 2){
    return 2;
  }
  if(num == 3){
    return 4;
  }
  return staircase(num-1)+staircase(num-2)+staircase(num-3);
}

int main(){

  int n;
  cin >> n;
  cout << staircase(n) << endl;

  return 0;
}
