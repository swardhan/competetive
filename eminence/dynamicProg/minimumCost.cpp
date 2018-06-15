#include<bits/stdc++.h>
using namespace std;

int min_cost2(int **input, int m, int n){
  int **dp = new int * [m+1];
  for(int i = 0; i <= m; i++){
    dp[i] = new int[n+1];
  }

  dp[m][n] = input[m][n];
  for(int i = m-1; i >=0; i--){
    dp[i][n] = dp[i+1][n] + input[i][n];
  }

  for(int j = n-1; j >=0; j--){
    dp[m][j] = dp[m][j+1] + input[m][j];
  }

  for(int i = m-1; i >= 0; i--){
    for(int j = n-1; j >= 0; j--){
      dp[i][j] = input[i][j] + min(dp[i][j+1], min(dp[i+1][j+1], dp[i+1][j]));
    }
  }
  int result = dp[0][0];
  for(int i = 0; i <= m; i++){
    delete dp[i];
  }
  delete [] dp;
  return result;
}

int main(){
  int  **input = new int *[3];
  for(int i = 0; i < 3; i++){
    input[i] = new int [3];
  }
  input[0][0] = 4;
  input[0][1] = 3;
  input[0][2] = 2;
  input[1][0] = 1;
  input[1][1] = 8;
  input[1][2] = 3;
  input[2][0] = 1;
  input[2][1] = 1;
  input[2][2] = 8;

  cout << min_cost2(input, 2, 2) << endl;

  for(int i = 0; i < 3; i++){
    delete input[i];
  }

  delete [] input;
  return 0;
}
