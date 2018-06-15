#include<bits/stdc++.h>
using namespace std;

int coin_change(int n, int * d, int numD, int ** output){
  if(n == 0){
    return 1;
  }
  if(numD == 0){
    return 0;
  }
  if(n < 0){
    return 0;
  }

  if(output[n][numD] > -1){
    return output[n][numD];
  }

  int first = coin_change(n - d[0], d, numD, output);
  int second = coin_change(n, d+1, numD-1, output);
  output[n][numD] = first + second;
  return first + second;
}

int main(){
  int d[2] = {1,2}, n=4, numD = 2;
  //allocate 2d array here, n+1 * numD+1
  int **output;
  output = new int * [n+1];
  for(int i = 0; i <= n; i++){
    output[i] = new int[numD+1];
  }
  //put all -1
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= numD; j++){
      output[i][j] = -1;
    }
  }
  cout << coin_change(n, d, numD, output) << endl;

  for(int i = 0; i <= n; i++){
    delete output[i];
  }
  delete [] output;
}
