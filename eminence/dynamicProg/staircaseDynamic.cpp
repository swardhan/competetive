#include<bits/stdc++.h>
using namespace std;

int staircase(int n, int * arr){
  if(n == 0 || n == 1){
    return 1;
  }
  if(n == 2){
    return 2;
  }
  if(n == 3){
    return 4;
  }
  if(arr[n] > 0){
    return arr[n];
  }
  int output = staircase(n-1, arr) + staircase(n-2, arr) + staircase(n-3, arr);
  arr[n] = output;
  return output;
}

int main(){
  int n;
  cin >> n;
  int * output = new int[n];
  memset(output, 0, sizeof(output));
  cout << staircase(n, output) << endl;

  delete [] output;
  return 0;
}
