#include<bits/stdc++.h>
using namespace std;

int magic_grid(int ** input, int r, int c){
  int ** dp = new int * [r];
  for(int i = 0; i < r; i++){
    dp[i] = new int [c];
  }
  int m = r-1, n = c-1;
  dp[m][n] = 0;
  dp[m-1][n] = 1;
  dp[m][n-1] = 1;

  for(int i = m-2; i >= 0; i--){
    dp[i][n] = dp[i+1][n] - input[i+1][n];
    if(dp[i][n] <= 0){
      dp[i][n] = 1;
    }
  }

  for(int j = n-2; j >= 0; j--){
    dp[m][j] = dp[m][j+1] - input[m][j+1];
    if(dp[m][j] <= 0){
      dp[m][j] = 1;
    }
  }

  for(int i = m-1; i >= 0; i--){
    for(int j = n-1; j >= 0; j--){
      // int tempi, tempj, temp;
      // if(dp[i][j+1] <= dp[i+1][j]){
      //   temp = dp[i][j+1];
      //   tempi = i; tempj = j+1;
      // }else{
      //   temp = dp[i+1][j];
      //   tempi = i+1; tempj = j;
      // }
      // dp[i][j] = temp - input[tempi][tempj];
      // if(dp[i][j] <= 0){
      //   dp[i][j] = 1;
      // }
      dp[i][j] = min(dp[i+1][j] - input[i+1][j],dp[i][j+1] - input [i][j+1]);
      if(dp[i][j] <= 0){
        dp[i][j] = 1;
      }
    }
  }

  // for(int i = 0; i < r; i++){
  //   for(int j = 0; j < c; j++){
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  int ans = dp[0][0];
  for(int i = 0; i < r; i++){
    delete dp[i];
  }
  delete [] dp;
  return ans;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int r, c, i, j;
    cin >> r >> c;
    int ** input = new int * [r];
    for(i = 0; i < r; i++){
      input[i] = new int [c];
    }
    for(i = 0; i < r; i++){
      for(j = 0; j < c; j++){
        cin >> input[i][j];
      }
    }
    int ans = magic_grid(input, r ,c);
    cout << ans << endl;

    for(i = 0; i < r; i++){
      delete input[i];
    }
    delete [] input;
  }
  return 0;
}
