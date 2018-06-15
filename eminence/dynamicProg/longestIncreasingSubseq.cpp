#include<iostream>
using namespace std;

int lis(int * input, int size){
  int * output = new int[size];
  output[0] = 1;
  for(int i = 1; i < size; i++){
    output[i] = 1;
    for(int j = i-1; j >= 0; j--){
      if(input[j] > input[i]){
        continue;
      }
      int possibleAns = output[j] + 1;
      if(output[i] < possibleAns){
        output[i] = possibleAns;
      }
    }
  }
  int best = 0;
  for(int i = 0; i < size; i++){
    if(output[i] > best){
      best = output[i];
    }
  }
  delete [] output;
  return best;
}

int main(){
  int n;
  cin >> n;
  int * input = new int[n];
  for(int i = 0; i < n; i++){
    cin >> input[i];
  }

  int ans = lis(input, n);
  cout << ans << endl;
  delete [] input;

}
