#include<bits/stdc++.h>

using namespace std;

int* stockSpan(int *input, int size){
  int* output = new int[size];
  int count, key;
  output[0] = 1;
  for(int i=1; i<size; i++){
    count = 1;
    key = input[i];
    for(int j = 0; j<i; j++){
      if(input[j] < key){
        count++;
      }else {
        count = 1;
      }
    }
    output[i] = count;
  }
  return output;
}

int main(){
  int n;
  cin >> n;
  int a[n];
  int * b;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  b = stockSpan(a, n);
  for(int i = 0; i < n; i++){
    cout << b[i] << " ";
  }
  cout << endl;
}
