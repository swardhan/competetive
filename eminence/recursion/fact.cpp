#include<iostream>

using namespace std;

int factorial(int n){
  if(n == 0){
    return 1;
  }
  return n * factorial(n-1);
}

int main(){
    int n=4;
    cin >> n;
    int output = factorial(n);
    cout << output <<endl;
    return 0;
}