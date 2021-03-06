#include<bits/stdc++.h>

using namespace std;

int fib(int n, int * carr){
  if(n == 1 || n == 0){
    return 1;
  }
  if(arr[n] > 0){
    return arr[n];
  }
  int output = fib(n-1, arr) + fib(n-2, arr);
  arr[n] = output;
  return output;
}

int fibi(int n){
  int * arr = new int[n+1];
  arr[0] = 1;
  arr[1] = 1;
  for(int i = 2; i <= n; i++){
    arr[i] = arr[i-1]+arr[i-2];
  }
  int output = arr[n];
  delete [] arr;
  return output;
}

int main(){
  int n;
  cin >> n;
  int arr[n+1];
  memset(arr, 0, sizeof(arr));
  cout << fib(n, arr) << endl;
  cout << fibi(n) << endl;

  return 0;
}
