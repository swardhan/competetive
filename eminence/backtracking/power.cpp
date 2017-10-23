#include<iostream>

using namespace std;

int power(int x, int n){
  if(n == 1){
    return x;
  }
  if(n == 0){
    return 1;
  }
  return power(x, n/2) * power(x, n-(n/2));
}

int main(){
  int x, n;
  cin >> x >> n;
  cout << power(x, n) << endl;;
}
