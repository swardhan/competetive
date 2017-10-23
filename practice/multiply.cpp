#include<iostream>

using namespace std;

int multiply(int a, int b){
  if(b==1){
    return a;
  }
  return a + multiply(a, b-1);
}

int main(){
  int a=5, b=6, res;
  res = multiply(a, b);
  cout << res <<endl;

  return 0;
}
